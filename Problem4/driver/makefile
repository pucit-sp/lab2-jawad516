all: myapp
CC=gcc
OBJS= prog1.o prog2.o prog3.o prog4.o
MYAPP=myapp
INSTDIR = /usr/bin

clean:
	-rm -f $(OBJS)

install: myapp
	if [ -d $(INSTDIR) ]; \
	then \
		cp myapp $(INSTDIR) && \
		chmod a+x $(INSTDIR)/myapp && \
		chmod og-w $(INSTDIR)/myapp && \
		echo "myexe installed successfully in $(INSTDIR)"; \
	fi


myapp: $(OBJS)
	$(CC) driver.c -o $(MYAPP)
prog1.o: prog1.c 
	$(CC) -c prog1.c
prog2.o: prog2.c
	$(CC) -c prog2.c
prog3.o: prog3.c
	$(CC) -c prog3.c
prog4.o: prog4.c
	$(CC) -c prog4.c





