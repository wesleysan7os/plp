remove(X,[],[]).
remove(X,[X|T],T).
remove(X,[Y|T],[Y|T1]) :- remove(X,T,T1).

:- initialization(main).
main:-
	read(Y), read(X), remove(X,Y,Tail), write(Tail), nl, halt(0).

