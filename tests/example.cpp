// Copyright 2021 Your Name <your_email>

#include <gtest/gtest.h>

#include <processing_request.hpp>
#include <stdexcept>
#include <thread>

TEST(Example, EmptyTest) {
    EXPECT_THROW(example(), std::runtime_error);
}

TEST(DISABLED_Snapshot, Speen) {
  for (;;) std::this_thread::yield();
}
