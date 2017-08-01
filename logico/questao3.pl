aluno(joao, final).
aluno(mariana, aprovado).
aluno(cleuza, aprovado).
aluno(maria, final).
aluno(jose, reprovado).
aluno(mary, aprovado).
aluno(joana, aprovado).

ehaluno(X, Y) :- aluno(Y, X).

:- initialization(main).
main:-
read(X),
ehaluno(Y,X),
write(Y),nl,
halt(0).

