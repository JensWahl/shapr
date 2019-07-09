library(shapr)

context("test-sample_combinations.R")

test_that("Test function on extra.R", {

  # Example -----------
  n_train <- 10
  n_test <- 10
  nosamp <- 7
  separate <- TRUE
  cnms <- c("samp_train", "samp_test")

  x <- sample_combinations(n_train, n_test, nosamp, separate)


  # Tests -----------
  expect_true(is.data.frame(x))
  expect_equal(names(x), cnms)
  expect_equal(nrow(x), nosamp)

  # Expect all unique values when nosamp < n_train
  expect_true(length(unique(x$samp_train)) == nosamp)
  expect_true(length(unique(x$samp_test)) == nosamp)

  expect_true(max(x$samp_train) <= n_train)
  expect_true(max(x$samp_test) <= n_test)

  # Example -----------
  n_train <- 5
  n_test <- 5
  nosamp <- 7
  separate <- TRUE

  x <- sample_combinations(n_train, n_test, nosamp, separate)

  # Tests -----------
  expect_true(max(x$samp_train) <= n_train)
  expect_true(max(x$samp_test) <= n_test)
  expect_equal(nrow(x), nosamp)

  # Example -----------
  n_train <- 5
  n_test <- 5
  nosamp <- 7
  separate <- FALSE

  x <- sample_combinations(n_train, n_test, nosamp, separate)

  # Tests -----------
  expect_true(max(x$samp_train) <= n_train)
  expect_true(max(x$samp_test) <= n_test)
  expect_equal(nrow(x), nosamp)


})
