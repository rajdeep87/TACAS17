TARGET=paper

all: clean ${TARGET}.pdf

${TARGET}.pdf: ${TARGET}.tex 
	pdflatex ${TARGET}.tex
	pdflatex ${TARGET}.tex
	pdflatex ${TARGET}.tex

clean:
	rm -f ${TARGET}.{log,aux,dvi,bbl,blg,toc,ps,pdf} 

purge: clean
	rm -f ${TARGET}.pdf

PHONY : all clean purge
