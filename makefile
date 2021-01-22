####################################################################################
############################### C++ makefile #######################################
####################################################################################
# Author: Ammar Shahin
# Date:   31/3/2020

############################### Variables #######################################
######### change The Files Name here ########
_DEPS =                          # The includes[.h and .hpp]
_OBJ  = 14_vectorSTL.o
_EXC  = app.exe                  # The Excutable File name 
#################################################################################
 
CXXC = g++
CXXFLAGS = -I$(IDIR) -Wall
CXX_DEBUG_FLAGS = -I$(IDIR) -Wall -0

IDIR = .\inc
ODIR = .\obj
SDIR = .\src\AhmedSallemCourse

LIBS = -lm

DEPS = $(patsubst %,$(IDIR)/%,$(_DEPS))

OBJ  = $(patsubst %,$(ODIR)/%,$(_OBJ))


#******************************* Rules *******************************
all: printStartMsg app size run
	
app: $(OBJ)
	@$(CXXC) -o $@ $^ $(CXXFLAGS) $(LIBS)

printStartMsg: 
	@echo Building...

size:                   #rule to git stastics of the program
	@echo Program Statics:
	@size $(_EXC)

git:                    # This rule is to automate aquick save to the VCS git 
	@echo Quick Saving...
	git add .
	git commit -m "Quick Save" 

run:
	@echo running...
	@$(_EXC)

$(ODIR)/%.o: $(SDIR)/%.cpp $(DEPS)
	@$(CXXC) -c -o $@ $< $(CXXFLAGS)

.PHONY: clean app

clean:
	@echo Cleaning...
	rm -rf *.exe $(ODIR)./*.o
