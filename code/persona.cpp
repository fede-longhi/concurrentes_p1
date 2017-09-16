class Persona{
private:
  char *nombre;
public:
  char *getNombre();
}

char *Persona::getNombre(){
  return nombre;
}
