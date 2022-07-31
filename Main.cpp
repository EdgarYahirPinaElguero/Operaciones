import java.util.*;

public class Main {
	public static void main(String[]args){
	    Scanner ingresar = new Scanner(System.in);
	    int val1;
	    int val2;
	    
	    System.out.println("Ingresa el primer valor");
	    val1 = ingresar.nextInt();
	    
	    System.out.println("Ingresa el segundo valor");
	    val2 = ingresar.nextInt();

	    Operacion1 val = new Operacion1();
	    
	    System.out.println("El resultado de la suma es: "+val.suma(val1, val2));
	    System.out.println("EL resultado de la resta es: "+ val.resta(val1, val2));
	    System.out.println("El resultado de la multiplicacion es: "+ val.multiplicacion(val1, val2));
	    System.out.println("El resultado de la division es: "+ val.division(val1, val2));
	    }
	}
