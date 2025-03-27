<h1> Tutorial da Teoria </h1>
<h2> 1. Modelos de Rede </h2>
<h3> 1.1. Tight Binding </h3>

    Modelos tight binding (TB) são modelos discretos usualmente usados em física do estado sólido, devido à sua simplicidade e sua facilidade de manipulação em simulações computacionais.

    Para a construção de um modelo TB, primeiro considere uma cadeia linear de átomos e que cada sítio é etiquetado com um índice i que vai de 0 até N. A amplitude de um elétron inicialmente no orbital do sítio i tunelar para o orbital num sítio j é
$$\begin{gather}
-t = \bra{j}\hat{H}\ket{i} \, ,j\not=i
\end{gather}$$
    E a energia que um elétron assume ocupando o orbital $i$ é
$$\begin{gather}
\epsilon_i = \bra{i}\hat{H}\ket{i}
\end{gather}$$
    Para exemplificar, considere uma molécula diatômica com um orbital por átomo. Neste caso a hamiltoniana fica escrita como
$$\begin{gather}
\hat{H} = \epsilon_1\ket{1}\bra{1} + \epsilon_2\ket{2}\bra{2} - t(\ket{1}\bra{2} + \ket{2}\bra{1}).
\end{gather}$$
    Em notação matricial,
$$\begin{gather}
(\hat{H}) = \begin{pmatrix}
\epsilon_1 & -t \\
-t & \epsilon_2
\end{pmatrix}
\end{gather}$$
    É claro que a origem de t, também conhecido como hopping, vêm do overlap entre orbitais atômicos. Assim, um orbital molecular surge da combinação linear de orbitais atômicos. Esta aproximação se chama LCAO (Linear Combination of Atomic Orbitals).

    Para uma rede cristalina, o que se faz é considerar uma "molécula" infinita. Então uma nova aproximação é feita:
$$\begin{gather}
\bra{j}\hat{H}\ket{i} = -t \;, j = i+1\\
\bra{j}\hat{H}\ket{i} = 0 \;, \text{caso contrário}
\end{gather}$$
    Esta é a chamada aproximação de primeiros vizinhos, em que se considera o tunelamento apenas entre os sítios mais próximos. É claro que esta aproximação pode ser melhorada colocando termos de segundos, terceiros, etc vizinhos. No entanto, a intersecção entre orbitais atômicos cai exponencialmente com a distância, de forma que truncar o alcance do tunelamento passa a não fazer muita diferença.

    Além do modelo mais simples explicitado acima, há também como considerar mais orbitais por sítio e também colocar mais sítios numa célula unitária (Ex.: o cristal de sal de cozinha tem dois átomos por célula unitária, um de sódio e outro de cloro).

    Na linguagem da segunda quantização, um modelo TB é escrito como
$$\begin{gather}
\hat{H} = \sum_{i\sigma}\epsilon_i\hat{n}_{i\sigma} - t\sum_{\langle ij\rangle\sigma}(\hat{c}_{i\sigma}^{\dagger}\hat{c}_{j\sigma} + \text{h.c})
\end{gather}$$
    Em que c_{i\sigma}^{dagger} (c_{i\sigma}) cria (destrói) uma partícula de spin sigma no sítio i e h.c se refere ao hermitiano conjugado.

<h3> 1.2 Modelo de Hubbard </h2>

    O modelo de Hubbard é um modelo interagente muito utilizado para a descrição de óxidos de metais de transição, pois apesar de ser um modelo relativamente simples, possui muitas características interessantes, evidenciando diversas fases da matéria, como supercondutividade, magnetismo, etc.

    A aproximação envolvida no modelo de Hubbard é a seguinte: como há blindagem contra o potencial Coulombiano, a repulsão coumlombiana entre elétrons deve cair rapidamente com a distância, de forma que ela só deve ser relevante entre elétrons ocupando o mesmo orbital. Desta forma, é introduzido um novo termo ao hamiltoniano:
$$\begin{gather}
\hat{H}_{U} = \sum_{i}U_i\hat{n}_{i\uparrow}\hat{n}_{i\downarrow}
\end{gather}$$
    Desta forma, o hamiltoniano proposto pelo modelo de Hubbard é
$$\begin{gather}
\hat{H} = \sum_{i\sigma}\epsilon_i\hat{n}_{i\sigma} - t\sum_{\langle ij\rangle\sigma}(\hat{c}_{i\sigma}^{\dagger}\hat{c}_{j\sigma} + \text{h.c}) + \sum_{i}U_i\hat{n}_{i\uparrow}\hat{n}_{i\downarrow}
\end{gather}$$

<h2> 2. Métodos numéricos </h2>
<h3> 2.1. Diagonalização Exata (ED)</h3>
    Considere agora um sistema de muitos corpos, em que cada orbital possui d graus de liberdade. Como o estado de muitos corpos é dado pelo produto tensorial dos estados locais,

$$\begin{gather}
\ket{\phi_1,\phi_2,\cdots} = \ket{\phi_1}\otimes\ket{\phi_2}\cdots\otimes\ket{\phi_N},
\end{gather}$$
    a dimensão do espaço de Hilbert crescerá como
$$
\dim(\mathcal{H}) = d^N,
$$
    ou seja, exponencialmente.

    Dito isso, considere uma base do espaço de Hilbert, que usualmente será a base gerada pelos autovetores operador número.
$$
\{\ket{\Phi_\alpha}\}_{\alpha = 1}^{N}
$$
    Em que Phi_alpha é um estado de muitos corpos. 

    A representação de matriz de uma dada hamiltoniana é
$$
    (\hat{H})_{ij} = \bra{\Phi_j}\hat{H}\ket{\Phi_i}
$$
    Com a matriz em mãos, é possível utilizar algum método de diagonalização para obter seu espectro e seus autovetores.