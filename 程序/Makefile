# Note:
# target:
# \TAB cmd
# Use TAB instead of 4 spaces!!!



CC      = gcc
SOURCES = lex.yy.c cxYacc.tab.c

# -w: Inhibit all warning messages.
CFLAGS = -w
LEX    = flex
YACC   = bison
YACCFLAGS = -d
EXECUTABLE = cx

$(EXECUTABLE): lex.yy.c cxYacc.tab.h cxYacc.tab.c
	$(CC) $(CFLAGS) $(SOURCES) -o $(EXECUTABLE)

lex.yy.c: cxLex.l
	$(LEX) cxLex.l
cxYacc.tab.c cxYacc.tab.h: cxYacc.y
	$(YACC) $(YACCFLAGS) cxYacc.y

clean:
	rm -rf *o $(EXECUTABLE)
	rm -rf $(SOURCES) cxYacc.tab.h
