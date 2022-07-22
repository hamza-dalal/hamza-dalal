# Hyper Geometric Distribution

# Probability distribution
x <- dhyper(seq(0, 22, by = 1.2), m = 45, n = 30, k = 20); x
x <- dhyper(seq(0, 20, by = 0.5), m = 40, n = 30, k = 25); x
plot(x, type = "o")

# Cumulative distribution
y <- phyper(seq(0, 22, by = 1), m = 40, n = 20, k = 31); y
plot(y, type = "o")

# Quantile distribution
z <- qhyper(seq(0, 1, by = 0.02), m = 49, n = 18, k = 30); z
plot(z, type = "p")

# Generate Hyper-Geometric distributed random numbers
a <- rhyper(100, m = 50, n = 20, k = 30); a
plot(a, type = "p")
hist(a)