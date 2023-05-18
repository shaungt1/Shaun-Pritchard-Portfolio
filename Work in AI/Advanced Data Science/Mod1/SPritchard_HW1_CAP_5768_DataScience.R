install.packages("ggplot2")


# Create the scatterplot
library(ggplot2)
library(ISLR)

# Create the scatterplot
ggplot(College, aes(x = Top10perc, y = Outstate)) +
  geom_jitter(alpha = 0.3) +
  facet_grid(. ~ Private) +
  geom_smooth(method = "lm", se = TRUE, color = "blue") +
  geom_smooth(method = "lm", se = TRUE, color = "red", formula = y ~ x, data = subset(College, Private == "Yes")) +
  theme_light()+
  theme(strip.background = element_blank())+
  geom_rug(color = "blue")+
  geom_rug(data = subset(College, Private == "Yes"), color = "red")