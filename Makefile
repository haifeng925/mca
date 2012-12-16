CFLAGS = -Wall -Wextra -O2 -g -k -DDEBUG=0
LDFLAGS := -pthread
CC = sscc
RM = rm -f

SRC = tinyjpeg.c loadjpeg.c tinyjpeg-parse.c jidctflt.c conv_yuvbgr.c huffman.c
OBJ = $(SRC:.c=.o)
EXEC = tinyjpeg

IMGIN = ../test_images/earth-8k.jpg
IMGOUT =../test_images/earth-8k.tga

IMGIN_MK = ../test_images/earth-8k-markers.jpg
IMGOUT_MK = ../test_images/earth-8k-markers.tga

MD5SUM = md5sum --check
MD5 = earth-8k.md5

MD5_MK = earth-8k-markers.md5



all: $(EXEC)

$(EXEC): $(OBJ)
	$(CC) -o $@ $(LDFLAGS) $^

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(EXEC) $(OBJ)

run:
	./$(EXEC) $(IMGIN) $(IMGOUT)
runmk:
	./$(EXEC) $(IMGIN_MK) $(IMGOUT_MK)

check:
	cd ../test_images && $(MD5SUM) $(MD5)

checkmk:
	cd ../test_images && $(MD5SUM) $(MD5_MK)

bmk :
	rm $(IMGOUT) && ./$(EXEC) --benchmark $(IMGIN) $(IMGOUT)

bmk_mk :
	rm $(IMGOUT_MK) && ./$(EXEC) --benchmark $(IMGIN_MK) $(IMGOUT_MK)

