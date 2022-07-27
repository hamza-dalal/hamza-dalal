# t Distribution

# Probability Distribution
x <- dt(-5:10, df = 2); x
plot(x)

# Cumulative Distribution
y <- pt(0, df = 2); y
plot(y)

# Quantiles
z <- qt(0.6, df = 5); z

# Generate random numbers
a <- rt(120, df = 2); a
plot(a)
hist(a, breaks = 25)
