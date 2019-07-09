# defining global variables to appease R CMD Check

utils::globalVariables(
  names = c(
    ".",
    "phi",
    "header",
    "pred",
    "variable",
    "description"
  ),
  package = "shapr",
  add = FALSE
)
