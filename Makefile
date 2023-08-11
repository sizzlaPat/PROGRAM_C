// par convention les variables sont en majuscule
FICHIER =main.c\
		mouvement.c\
		display.c\
		routine.c

CIBLE = cible

all :
	 gcc main.c mouvement.c display.c routine.c
	 pour que les fichier ne soit pas vu apres un make
	$( gcc main.c mouvement.c display.c routine.c)
	gcc ${FICHIER} -o${CIBLE}
# regle : dependance
run:
     make
	 ./a.out
	 ./${CIBLE}

// supprime les .o et les  a.out
clean:
 rm  a.out
 rm  ${CIBLE}