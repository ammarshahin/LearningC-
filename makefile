# Author: Ammar Shahin
# Date:   31/3/2020

############################### Variables #######################################

######### change The File Names here ########
_DEPS =                           #The includes[.h and .hpp]
_OBJ  = FirstOOPprogram.o
_EXC  = app.exe   
#################################################################################
 
CC = g++
CXXFLAGS = -I$(IDIR) -Wall
CXX_DEBUG_FLAGS = -I$(IDIR) -Wall -g -0g

IDIR = .\inc
ODIR = .\obj
LDIR = .\lib
SDIR = .\src

LIBS = -lm

DEPS = $(patsubst %,$(IDIR)/%,$(_DEPS))

OBJ  = $(patsubst %,$(ODIR)/%,$(_OBJ))


#******************************* Rules *******************************
all: git clean printStartMsg app running
	
size:                   #rule to git stastics og the program
	@echo -------------Program Statics: -------------
	size $(_EXC)

printStartMsg: 
	@echo -------------Building...-------------

app: $(OBJ)
	$(CC) -o $@ $^ $(CXXFLAGS) $(LIBS)

git:
	@echo -------------Quick Saving...-------------
	git add .
	git commit -a -m "Quick Save" 

running:
	@echo -------------running...-------------
	@$(_EXC)

$(ODIR)/%.o: $(SDIR)/%.cpp $(DEPS)
	$(CC) -c -o $@ $< $(CXXFLAGS)

.PHONY: clean

clean:
	@echo -------------Cleaning...-------------
	del *.exe $(ODIR).\*.o