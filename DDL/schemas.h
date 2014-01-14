 

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


extern void connect() {
	fprintf(stdout, "#! Usage: Connect -u {}\n");
}

extern void connect_db() {
<<<<<<< HEAD

=======
	fprintf(stdout, "#! -- Usage: connect {db} [-u name] [-p password]\n");
>>>>>>> 8778dc277802c7973ea005cb00e8d2aa71c454c2
}

extern void disconnect_db() {

}

extern void create_table(){

}

extern void insert() {

}

extern void update(){

}

extern void delete(){

}

extern void select(){

}

extern void show(){

} // Parametres
<<<<<<< HEAD
<<<<<<< HEAD

extern void commit(){
	
=======

extern void commit(){

>>>>>>> 9dd7a24b20ea2a07298e29b80dc996d3947a450d
=======

extern void commit(){

>>>>>>> 8778dc277802c7973ea005cb00e8d2aa71c454c2
}
