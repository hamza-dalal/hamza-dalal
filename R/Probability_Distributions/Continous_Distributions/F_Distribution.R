# F Distribution

# Probability Distribution
x <- df(0:10, df1 = 2, df2 = 3); x
plot(x)

# Cumulative Distribution
y <- pf(0:10, df1 = 2, df2 = 3); y
plot(y)

# Quantiles
z <- qf(0.6, df1 = 5, df2 = 6); z

# Generate random numbers
a <- rf(120, df1 = 2, df2 = 3); a
plot(a)
hist(a, breaks = 25)
