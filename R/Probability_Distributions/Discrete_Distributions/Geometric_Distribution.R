# Geometric Distribution

# Probability distribution
x <- dgeom(0:10, 0.6); x
plot(x, type = "o")

# Cumulative distribution
y <- pgeom(10, 0.33); y

# Quantile distribution
z <- qgeom(0.98, 0.33); z

# Generate Poisson distributed random numbers
a <- rgeom(1000, 0.05); a
plot(a, type = "p")
hist(a, breaks = 100)
