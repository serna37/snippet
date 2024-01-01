cpp() {
    filename=$1
    g++ -std=c++23 -o $1 $1.cpp
    ./$1
}

cd tests
cpp template
cpp const
cpp stl
cpp grammer

cd ../algo
cpp is_prime
cpp eratosthenes_sieve
cpp modpow
cpp fermat
cpp euclid
cpp bit
cpp two_point
cpp bfs1
cpp bfs2
cpp dp
cpp compress
