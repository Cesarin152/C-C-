/*
Constructores


Los constructores pueden ser muy útiles para establecer los valores iniciales de ciertas variables miembro.
Un constructor por defecto no tiene parámetros. Sin embargo, cuando es necesario, se pueden añadir parámetros 
a un constructor. Esto hace posible asignar un valor inicial a un objeto cuando se crea, como se muestra en el siguiente ejemplo:

class myClass {
  public:
    myClass(string nm) {
      setName(nm);
    }
    void setName(string x) {
      name = x;
    }
    string getName() {
      return name;
    }
  private:
    string name;
};

Definimos un constructor, que toma un parámetro y lo asigna al atributo name usando el método setName().
 */