reinado(rhodi, 844, 878).
reinado(hywal_ap_ieuaf, 979, 965).
reinado(anarawd, 878, 916).
reinado(cadwallon, 985, 986).
reinado(hywel_dda, 916, 950).
reinado(lago_ap_idwal, 950, 979).
reinado(maredudd, 986, 999).

principe(X, Y) :- reinado(X, A, B), Y >= A, Y =< B.

:- initialization(main).
main:-
read(X),
principe(Y,X),
write(Y),nl,
halt(0).
