CC=g++
bin=Jarvis
src=Jarvis.cc
INCLUDE=-Ispeech/
LIB=-ljsoncpp -lcurl -lcrypto -lpthread
FLAGS = -D_LOG_

$(bin):$(src)
	$(CC) -o $@ $^ -std=c++11 $(FLAGS) $(INCLUDE) $(LIB)
.PHONY:clean
clean:
	rm -f $(bin)
