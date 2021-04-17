principal()
{
    entera opcion; //Variable y la estoy declarando//
    enpantalla ("¿De qué producto quiere el precio?");
    enpantalla ("1. Tortillas");
    enpantalla ("2. Manzanas");
    enpantalla ("3. Refresco");
    enpantalla ("4. Garrafón de agua");
    enpantalla ("5. Verdura");
    capturarespuesta ("%i", &opcion);
    
    caso (opcion)
    {
        caso 1:
            enpantalla ("el kg de tortillas vale $21");
            rompe;
        caso 2;
            enpantalla ("el kg de manzana vale $50");
            rompe;
        caso 3;
            enpantalla ("el refresco de un litro vale $21");
            rompe;
        caso 4; 
            enpantalla ("el garrafon de 20 litros vale $40");
            rompe;
        caso 5;
            enpantalla ("el kg de verdura mixta vale $30");
            rompe:
    }

}