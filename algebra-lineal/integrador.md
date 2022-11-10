# UNIDAD 1: Matrices - Sistemas de ecuaciones lineales

1. Definir matriz y orden de una matriz

   - **matriz** es todo cuadro ordenado de números dispuestos en filas y columnas.
   - Si la matriz tiene _m_ filas y _n_ columnas diremos que es de **orden** _m x n_.

---

2. Dar la definición de tres matrices especiales.

   - **Matriz triangular superior**: es aquella matriz cuadrada cuyos elementos ubicados por debajo de la diagonal principal son todos nulos.
   - **Matriz triangular inferior**: es aquella matriz cuadrada cuyos elemenos ubicados por encima de la diagonal principal son todos nulos.
   - **Matriz diagonal**: es aquella matriz cuadrada que es triangular superior e inferior simultaneamente.

---
3. ¿Cuándo dos matrices son equivalentes?

    Dos matrices son **equivalentes** si y solo si una de ellas puede obtenerse realizando un número finito de operaciones elementales entre filas de la otra (escribiremos $A \sim B$).

---
4. Definir operaciones elementales entre filas de una matriz.

   Dada una matriz $A$, llamaremos _"operacion elemental entre filas de $A$"_ a cualquiera de las siguientes operaciones:

     - Intercambio de dos filas cualesquiera de $A$.
     - Multiplicación de una fila de $A$, por un escalar no nulo.
     - Reemplazo de una fila cualquiera de $A$ por la suma de ella más un múltiplo de otra fila

---
5. Definir rando de una matriz. ¿Se puede calcular el rango de cualquier matriz? Si es así, ¿Cómo se calcula en la práctica?

    **Rango de una matriz**: **Rango** de una matriz $A_{mxn}$ y lo indicaremos $rg(A)$, al orden de mayor determinante no nuilo que se pueda extraer de la matriz.

    Se puede calcular del rango de cualquier matriz.
    
    La práctica consiste en encontrar una matriz escalonada equivalente a la matriz dada. El rango de la escalonada hallada es el número de filas no nulas y éste será el rango de la matriz dada, por ser equivalente a la escalonada.

---
6. Enunciar el Teorema de Rouché-Frobenius

    La condición necesaria y suficiente para que un sistema lineal _m_ ecuaciones con _n_ incognitas $A.X=B$ admita solución. es que la matriz $A$ de los coeficientes y la matriz orlada $A°$ tengan igual rengo, es decir:

    $A.X=B$ es compatible $sii$ $rg(A) = rg(A°)$.

    $A.X=B$ es incompatible $sii$ $rg(A) \neq rg(A°)$.
 
   Además:

    Si el sistema $A.X=B$ es compatible y $rg(A) = n = \text{n° de incógnitas}$, entonces dicho sistema es compatible determinado.

    Si el sistema $A.X=B$ es compatible y $rg(A) = h < n$, entonces dicho sistema es compatible determinado.
---

7. Definir sistemas simultáneos. Enunciar una aplicación de sistemas simultáneos.

    Dos sistemas lineales de _m_ ecuaciones con _n_ incógnitas se llaman "**simultáneos**" $sii$ tienen la misma matriz de coeficientes y sólo difieren en los términos independientes.
   
    **Calculo de una matriz inversa mediante sistemas simultáneos**
     - Primero se verifica que el determiante de la matriz dada sea diferente de 0 ($|A| \neq 0$).
     - Luego encontrar $A^{-1}$ significa resolver 3 sistemas de ecuaciones, cuya matriz de los coeficientes es la matriz dada y los términos independientes son las columnas de la matriz $I_3$.
     - La solución de cada sistema será una columna de la matriz inversa buscada.

# UNIDAD 2: álgebra vectorial - Geometría analítica

1. ¿Qué es un vector?

    Todo segmento orientado es un **vector**

---
2. ¿Cuáles son los elementos que caracterizan a un vector?

   - **Módulo**: Es el número dado por la longitud del segmento $AB$ y se indica $||\vec{AB}||$: 
   $$||\vec{AB}|| = long(AB)$$
   - **Dirección**: Es la dirección de la recta que contiene a los puntos $A$ y $B$.
   - **Sentido**: Está determinado por el origen y el extremo del vector. Decimos que el vector $\vec{AB}$ tiene el sentido "de $A$ hacia $B$".

---
3. ¿Qué operaciones conoce entre vectores? Definir cada una de ellas.

   Las operaciones que conozco, son: suma de vectores, producto de un vector por un escalar, producto escalar

    **Producto de un vector por un escalar**: Sean $\vec{v}$ un vector del pplano o del espacio y $\alpha \in R$, un número real arbitrario, definimos el producto de un vector por un escalar y lo indicaremos con $\alpha\vec{v}$ al vector que tiene:

     - Módulo: $||\alpha\vec{v}= |\alpha|.||\vec{v}||$
     - Dirección: La misma dirección de $\vec{v}$
     - Sentido:
       - Si $\alpha > 0$ y $\vec{v} \neq \vec{0}$ entonces $\alpha\vec{v}$ tiene el mismo sentido que $\vec{v}$
       - Si $\alpha < 0$ y $\vec{v} \neq \vec{0}$ entonces $\alpha\vec{v}$ tiene sentido opuesto que $\vec{v}$
       - Si $\alpha = 0$ entonces $\alpha\vec{v}=\vec{0}$
---
4. ¿Cuándo dos vectores son perpendiculares? ¿Y paralelos?

   - Dos vectores no nulos son **ortogonales** o **perpendiculares** $sii$ su producto escalar es 0.
   - Dos vectores $\vec{u}$ y $\vec{v}$ son paralelos $sii$ $\vec{u}=\lambda\vec{v}$ con $\lambda \in R$.
---
5. Enunciar las condiciones de paralelismo y perpendicularidad entre rectas, en el plano y en el espacio.

    Dos vectores son ortogonales $sii$ forman entre sí un ángulo de 90 grados
---
6. Responder **V** o **F**. Justificar.

   - $y=2$ es la ecuación de una recta en el plano paralela al eje $X$.

     - **Verdadero**. Si $y=2$ el eje x tiene por ecuación $y=0$.

   - Si $\vec{v}=(v_1,0)$ es un vector director de la recta _r_ entonces _r_ es paralela al eje $Y$.

     - **Verdadero**

   - si la recta _r_ en el plano pasa por los puntos $P(0,b)$ y $Q(a,0)$ entonces la ecuación de la recta es: 

   $$\frac{x}{a} + \frac{y}{b} = 1$$

     - **Verdadero**

   - Si la recta _r_ en el plano pasa por el origen entonces su ecuación es: 

   $$y=mx$$

     - **Verdadero**

   - Si $\vec{N}=(A,B,C)$ es un vector ortogonal a una recta en el espacio entonces su ecuación es: 

   $$(x,y,z)=(x_o,y_o,z_o) + (A,B,C)$$

     - **Verdadero**

# UNIDAD 3: Espacios vectoriales de dimensión Finita

1. ¿Todo subconjunto de $E.V$ es un subespacio? Justificar y ejemplificar.

    Todo subconjunto de $E.V$ es un subespacio $sii$ tiene estructura de $E.V$ y satisface las siguientes condiciones:
   - Si $\bar{u}, \bar{v} \in S$ entonces $\bar{u} + \bar{v} \in S$
   - Si $\lambda$ es un escalar, $\bar{u} \in S$ entonces $\lambda\bar{u} \in S$

    **Ejemplo**:

    Dado cualquier espacio vectorial V, el conjunto $\{\bar{0}\}$ donde $\bar{0}$ es el vector nulo de V, es un subespacio de $V$.

---
2. Dado un subconjunto X de un $E.V$, definir subespacio generado por $X$. ¿Qué nombre recibe el conjunto $X$?.

    Sea $V$ un $E.V$ y sea $X$ un subcnjunto finito no vacio de $V$. Llamaremos subespacio generado por el conjunto $X$ al conjunto de todas las combinanciones lineales de los vectores de $X$ y lo indicaremos $SG(X)$

    El conjunto X se dirá un "_sistema de generadores_" o simplemente "_generador_".
---
3. Definir vectores $L.I$ y $L.D$.

    Sea $V$ un $E.V$ diremos que los vectores $\bar{b_1}, \bar{b_2},...,\bar{b_p}$ son linealmente independientes $sii$ ningún vector es $C.L$ de los restantes.

    Si algún vector es $C.L$ de los restantes, diremos que los vectores $\bar{b_1}, \bar{b_2},...,\bar{b_p}$ son linealmente dependientes.
---
4. Enunciar dos propiedades para los vectores $L.I$ y $L.D$.

    - Cualquier conjunto de vectores que contenga al vector nulo es $L.D$.
    - Cualquier conjunto dormado por un sólo vector no nulo es $L.I$.
---
5. Explicar con sus palabras el procedimiento matricial para analizar la independia lineal o la dependiencia lineal de vectores.

    Dado un conjunto cualquiera de vectores, formamos una matriz cuyos vectores filas son los vectores del conjunto dado, procedemos a escalonar la matriz formada. Luego, si al menos una fila se convierte en nula, el conjunto es linealmente dependiente, por el contrario si no hay filas nulas en la matriz escalonada, el conjunto es linealmente indepenediente.
---
6. ¿Cuáles son las condiciones que verifica un conjunto $B$ para ser base de un $E.V$ o de un subespacio?

    Sea $V$ un $E.V$, un subconjunto finito $B$ de $V$ se dice base de $V$ $sii$ $B$ es un generador $L.I$ de $V$.
---
7. Pueden existir dos bases o más de un $E.V$ (o de un subespacio), formadas por distintas cantidad de vectores? Justificar.

    Si el $E.V$ tiene dimensión _n_, dicho $E.V$ admite una base formada por _n_ vectores.
---
8. Definir dimensión de un $E.V$ (o de un subespacio).

    Sea $V$ un $E.V$ llamaremos dimensión de $V$ al número de vectores de una base cualquiera de $V$.
---
9. Enunciar las propiedades de la dimensión de cualquier subespacio $S$.

    Sea $V$ un $E.V$ y sea $S$ un subespacio de $V$, se verifica:
     - $dimS \leq dimV$
     - $dimS = dimV$ $sii$ $S=V$
     - $dimS = dimV - \text{n° ecuaciones cartesianas de S}$
---
10. Enunciar el Teorema de Extensión a una base y explicarlo con sus palabras.

    Sea $V$ un $E.V$ de dimensión _n_, entonces, todo conjunto $L.I$ de vectores de $V$ se puede extender hasta formar una base de $V$.
    
    Dado un conjunto de vectores linealmente independiente de un $E.V$ de dimensión _n_, sabemos que dicho conjunto no puede tener mas de _n_ vectores para poder extenderlo, si el conjunto tiene menos de _n_ vectores, siempre va a existir uno o mas vectores que no sean $C.L$ de los que ya conforman el conjunto, por lo que podemos agregarlos, hasta alcanzar un conjunto de dimensión _n_ que sea base del $E.V$.
---
11. Definir componentes de un vector en una base de un $E.V$.

    Sea $V$ un $E.V$ y sea $B=\{\bar{b_1}, \bar{b_2},...,\bar{b_p}\}$ una base de $V$. Entonces todo vector $\bar{v} \in V$ se puede expresar de manera única como $C.L$ de los vectores de $B$, es decir, existen escalares únicos $\lambda_{1}, \lambda_{2}, ..., \lambda_{n} \in R$ tales que:
    $$\bar{v} = \lambda_{1} \bar{b_1}+ \lambda_{2}\bar{b_2}+ ... + \lambda_{n}\bar{b_n}$$

# UNIDAD 4: Espacios vectoriales euclídeos

1. ¿Qué es un $E.V$ Euclídeo?
   - Se llama espacio vectorial euclideo a todo espacio vectorial real en el cual se ha definido un producto interior
---
2. ¿Qué entiende por normalizar un vector?
   - Normalizar un vector es un procedimiento que nos permite reducir la logitud del vector (módulo) a 1.
---
3. ¿Cualquier vector puede ser normalizado?
   - Cualquier vector diferente del nulo puede ser normalizado
---
4. ¿Cuándo dos vectores son ortogonales?
   - Sea $V$ un $E.V.E$ con producto interior $< \ ,>$ y sean $\bar{u},\bar{v} \in V$ diremos que $\bar{u}$ es ortogonal a $\bar{v}$ $sii$ se verifica que $<\bar{u},\bar{v}> = 0$
---
5. ¿Si dos vectores son ortogonales respecto de un $P.I$ determinado entonces son ortogonales respecto de cualquier $P.I$?

    NO LO SE!!!!!!
---
6. ¿Qué es una base ortogonal?

    Sea $V$ un $E.V.E$. Un conjunto $B$ de vectores de $V$ se dice una *base ortonormal* de $V$ $sii$ $B$ es una base de $V$ y es un conjunto ortonormal. 
---
7. Explicar el Procedimiento de Ortogonalización de G-S.

    **Primer paso**: A partir del conjunto $\{\bar{u_1}, \bar{u_2}, ..., \bar{u_n}\}$ hallamos un $C.O$ $\{\bar{v_1}, \bar{v_2}, ..., \bar{v_n}\}$ mediante las fórmulas.

    **Segundo paso**: Hallamos el $C.O.N$ buscado $\{\bar{w_1}, \bar{w_2}, ..., \bar{w_n}\}$ normalizando los vectores $\bar{v_i}$ obtenidos en el paso.

# UNIDAD 5: Transformaciones lineales

1. Definir transformación lineal.

    Sea $U$ y $V$ dos $E.V$, una transformación lineal ($T.L$) entre $U$ y $V$ es una función $T:U \rightarrow V$ que verifica las siguientes condiciones:

    - La imagen de la suma de dos vectores cualesquiera de $U$, es igual a la suma de las imágenes de dichos vectores en $V$.

    $$T(\bar{u}+\bar{v})=T(\bar{u}) + T(\bar{v})$$

    - La imagen del producto de cualquier escalar por un vector cualesquiera de $U$, es igual al producto del escalar por la imagen de dicho vector en $V$.

    $$T(\lambda\bar{u})=\lambda T(\bar{u})$$

    - El transformado del vector nulo de $U$ es el vector nulo de $V$

    $$T(\bar{0})=\bar{0}$$
---
2. Enunciar el teorema de existencia y unicidad de las transformaciones lineales.

    Sean $U$ y $V$ dos $E.V$, $B=\{\bar{u_1}, \bar{u_2}, ..., \bar{u_n}\}$ una base de $U$ y $\bar{v_1}, \bar{v_2}, ..., \bar{v_n}$ vectores cualesquiera de $V$. Entonces existe una única $T.L$. $T:U \rightarrow V$ que verifica $T(\bar{u_i}) = \bar{v_i}$, para todo $i=1, 2, ..., n$.

---
3. Definir núcleo e imagen de una transformación lineal.

    **Núcleo**: Sean $U$ y $V$ dos $E.V$ y sea $T:U \rightarrow V$ $T.L.$, llamaremos "**núcleo de $T$**", al conjuto de todos los vectores de $U$ que se transforman en el vector nulo de $V$.

    **Imagen**: Sean $U$ y $V$ dos $E.V$ y sea $T:U \rightarrow V$ $T.L.$, llamaremos "**imagen de $T$**", al conjuto de todos los vectores de $V$ que son transformados de vectores de $U$.

---
4. Explicar dos métodos para hallar la imagen de una T.L.

    **Método por definición**: 
    $$ImT=\{\bar{v} \in V \diagup \exists \bar{u} \in U : T(\bar{u})=\bar{v}\}$$
    - Tomamos un vector arbitrario del codominio, este vector va pertenecer a $ImT$ si es un transformado de algún vector del dominio.
    - Aplicamos la transformación a un vector del dominio y lo igualamos al vector arbitrario del codominio, con la resolución de la ecuación armamos un SEL.
    - Aplicamos Rouché-Frobenius y se debe verificar que $Rg(A) = Rg(A°)$ por lo que si esto se verifica $ImT= E.V$ si no se verifica, tendremos a nuestra disposición las condiciones necesarios para que ambos rangos sean iguales. 

    **Método por Lema**: Sean $U$ y $V$ dos $E.V$ $T:U \rightarrow V$ una $T.L$ y $B=\{\bar{b_1}, \bar{b_2}, ..., \bar{b_n}\}$ una base de $U$, entonces $T(B)=\{T(\bar{b_1}), T(\bar{b_2}), ..., T(\bar{b_n})\}$ es un generador de $ImT$.
    
---
5. ¿Cómo se clasifican las transformaciones lineales?

    - Una $T.L$ $T:U \rightarrow V$ es inyectiva $sii$ $NucT=\{\bar{0}\}$.
    - Una $T.L$ $T:U \rightarrow V$ es sobreyectiva $sii$ $ImT=V$.
    - Una $T.L$ $T:U \rightarrow V$ es biyectiva $sii$ $T$ es inyectiva y sobreyectva.

---
6. ¿Cómo se forma la matriz asociada a una T.L?
    - Hallar los transformados de la base del $domT$
    - Hallar las componentes de los transformados de la base en la base del $codomT$
    - Los componentes de los transformados de la base son las columnas de la matriz asociada a $T$ en las bases dadas.
---
7. ¿La matriz asociada a una T.L. sirve para clasificar las T.L? Explicar

    La matriz asociada sirve para clasificar a las $T.L$
    - Si el $Rg(A)=dimU$ $T$ es inyectiva
    - Si el $Rg(A)=dimV$ $T$ es sobreyectiva
    - Si el $Rg(A)=dimU=dimV$ $T$ es biyectiva

# UNIDAD 6: Diagonalización de Matrices

1. Definir autovalor y autovector.

    Sea $A$ una matriz cuadrada de orden $n$.

    - Un escalar $\lambda \in R$ se dice un **autovector** de $A$, $sii$ existe al menos un vector no nulo $\bar{x} \in R^n$ tal que $A.\bar{x}=\lambda . \bar{x}$
    - Al vector $\bar{x} \in R^n$ no nulo se le llamará **autovector de $A$ asociado a $\lambda$**.

---
2. Explicar cómo encontrar los autovalores.

    Un escalar $\lambda \in R$ es un autovalor de una matriz $A_n$ $sii$ $|A_n - \lambda . I_n| = 0$

---
3. Enunciar las propiedades de los autovalores.

    - La suma de todos los autovalores es la traza de la matriz: $\lambda_1 + \lambda_2 + ...+ \lambda_n = tr(A)$
    - El producto de todos los autovalores es el determinante de la matriz: $\lambda_1 . \lambda_2 . \, ... \, . \lambda_n = |A|$

---
4. ¿Cual es el polinomio característico y la ecuación característica de una matriz $A_n$?

  - El polinomio $|A-\lambda . I_n|$ recibe el nombre de "**polinomio característico**" de la matriz $A$
  - La ecuación $|A-\lambda . I_n|=0$ recibe el nombre de "**ecuación característica**" de la matriz $A$

---
5. Para una matriz $A_n$, ¿Siempre existe una matriz diagonal semejante a $A$?

    No, una matriz diagonal será semejante a la matriz $A$ $sii$ existe una matriz $P_n$ inversible tal que $D= P^{-1}.A.P$

---
6. ¿Cuál es la ventaja de trabajar con matrices simétricas?

    La ventaja de trabajar con matrices simétricas es que siempre serán diagonalizables ya que:
    
    - La ecuación característica de $A$ sólo tiene raíces reales.
    - Si $\lambda$ es un autovalor de $A$ entonces $dimS_{\lambda}=o.m(\lambda)$

---
7. ¿Cuándo dos matrices se dicen ortogonalmente semejantes?

    Una matriz $P \in M_n(R)$ se dice **ortogonal** $sii$ $P.P^T=P^T.P=I_n$

---
8. ¿Cómo debe ser una matriz para ser ortogonalmente diagonalizable?

    Se dice que una matriz A es ortogonalmente diagonalizable $sii$ $A$ es ortogonalmente semejante a una matriz diagonal $D$.

---
9. ¿Cómo se construye la matriz $P$ que diagonaliza ortogonalmente a $A$?

    - Hallar los autovalores de $A$
    - Hallar los subespacios propios y una base para cada subespacio propio de $A$
    - Si es necesario, aplicar $G-S$ a cada una de estas bases y normalizar, a fin de obtener un a $BON$ de cada subespacio propio.
    - Unir las bases ortonormales de los subespacios propios. Esta unión resulta un conjunto ortonormal de $n$ autovectores.
    - Formar la matriz $P$ cuyos vectores columnas son los vectores del conjunto ortonormal hallado.
    - Formar la matriz diagonal $D$ cuyos elementos de la diagonal principal son los autovalores correspondientes a los autovectores hallados.
