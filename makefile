############################### C++ MakeFile #######################################
# Author: Ammar Shahin
# Date:   31/3/2020

############################### Variables #######################################

######### change The Files Name here ########
_DEPS = rectClass.hpp              # The includes[.h and .hpp]
_OBJ  = 4rthLessonOOP.o
_EXC  = app.exe                  # The Excutable File name 
#################################################################################
 
CXXC = g++
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
all: git clean printStartMsg app run
	
size:                   #rule to git stastics og the program
	@echo -------------Program Statics: -------------
	size $(_EXC)

printStartMsg: 
	@echo -------------Building...-------------

app: $(OBJ)
	$(CXXC) -o $@ $^ $(CXXFLAGS) $(LIBS)

git:                      # This rule is to automate aquick save to the VCS git 
	@echo -------------Quick Saving...-------------
	git add .
	git commit -a -m "Quick Save" 

run:
	@echo -------------running...-------------
	@$(_EXC)

$(ODIR)/%.o: $(SDIR)/%.cpp $(DEPS)
	$(CXXC) -c -o $@ $< $(CXXFLAGS)

.PHONY: clean

clean:
	@echo -------------Cleaning...-------------
	del *.exe $(ODIR).\*.o