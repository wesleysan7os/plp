populacao(brasil, 200).
populacao(canada, 35).
populacao(russia, 142).
populacao(china, 1300).
populacao(eua, 320).
populacao(india, 1200).
populacao(japao, 127).

area(brasil, 8).
area(india, 3).
area(eua, 9).
area(canada, 9).
area(china, 9).
area(russia, 17). 
area(japao, 1).


maior(X,Z,R) :- populacao(X, A), area(X, B), populacao(Z, C), area(Z, D),  J is A/B, P is C/D, J >= P, R = X.
maior(X,Z,R) :- populacao(X, A), area(X, B), populacao(Z, C), area(Z, D),  J is A/B, P is C/D, J < P, R = Z.

:- initialization(main).
main:-
	read(X),
	read(Z),
	maior(X,Z,R),
	write(R),nl,
	halt(0).
