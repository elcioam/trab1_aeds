set datafile separator ","
set terminal png size 1280,720

# Gráficos para MinMax1
set output 'MinMax1 Aleatório.png'
set title 'Tempo de execução para MinMax1 Aleatório'
plot 'MinMax1.csv' every ::0::3 using 1:4 with lp lw 2 lc rgb 'purple' title 'Aleatório'

set output 'MinMax1 Crescente.png'
set title 'Tempo de execução para MinMax1 Crescente'
plot 'MinMax1.csv' every ::4::7 using 1:4 with lp lw 2 lc rgb 'blue' title 'Crescente'

set output 'MinMax1 Decrescente.png'
set title 'Tempo de execução para MinMax1 Decrescente'
plot 'MinMax1.csv' every ::8::11 using 1:4 with lp lw 2 lc rgb 'green' title 'Decrescente'

# Gráficos para MinMax2
set output 'MinMax2 Aleatório.png'
set title 'Tempo de execução para MinMax2 Aleatório'
plot 'MinMax2.csv' every ::0::3 using 1:4 with lp lw 2 lc rgb 'purple' title 'Aleatório'

set output 'MinMax2 Crescente.png'
set title 'Tempo de execução para MinMax2 Crescente'
plot 'MinMax2.csv' every ::4::7 using 1:4 with lp lw 2 lc rgb 'blue' title 'Crescente'

set output 'MinMax2 Decrescente.png'
set title 'Tempo de execução para MinMax2 Decrescente'
plot 'MinMax2.csv' every ::8::11 using 1:4 with lp lw 2 lc rgb 'green' title 'Decrescente'

# Gráficos para MinMax3
set output 'MinMax3 Aleatório.png'
set title 'Tempo de execução para MinMax3 Aleatório'
plot 'MinMax3.csv' every ::0::3 using 1:4 with lp lw 2 lc rgb 'purple' title 'Aleatório'

set output 'MinMax3 Crescente.png'
set title 'Tempo de execução para MinMax3 Crescente'
plot 'MinMax3.csv' every ::4::7 using 1:4 with lp lw 2 lc rgb 'blue' title 'Crescente'

set output 'MinMax3 Decrescente.png'
set title 'Tempo de execução para MinMax3 Decrescente'
plot 'MinMax3.csv' every ::8::11 using 1:4 with lp lw 2 lc rgb 'green' title 'Decrescente'
