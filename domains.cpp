\section{Abstract Domains}\lable{domain}
The commonly used library for numerical abstract domains  
is the APRON C library~\cite{apron}.  This library is 
used for the static analysis of the numerical variables 
of a program by abstract interpretation. APRON provides a 
C API interface to various abstract domains and libraries 
such as {\em BOX}, {\em OCTAGON}, {\em Convex Polyhedra} and
{\em Linear Equalities} library.  The aim of such analysis is 
to compute invariants over numerical variables in the 
program~\cite{se2011}. 

\subsection{Octagon Abstract Domain}
