// Copyright 2024 Kistrimova Ekaterina
#include <gtest/gtest.h>

#include <vector>

#include "seq/kistrimova_e_graham_alg/include/ops_seq.hpp"

TEST(kistrimova_e_graham_alg_seq, t1) {
  // Create data
  std::vector<point> in{{-2, -2}, {4, 0}, {3, 0}};
  std::vector<point> out(in.size());
  std::vector<point> res{{-2, -2}, {4, 0}, {3, 0}};

  // Create TaskData
  std::shared_ptr<ppc::core::TaskData> taskDataSeq = std::make_shared<ppc::core::TaskData>();
  taskDataSeq->inputs.emplace_back(reinterpret_cast<uint8_t *>(in.data()));
  taskDataSeq->inputs_count.emplace_back(in.size());
  taskDataSeq->outputs.emplace_back(reinterpret_cast<uint8_t *>(out.data()));
  taskDataSeq->outputs_count.emplace_back(out.size());

  // Create Task
  GrahamAlgTask testTaskSequential(taskDataSeq);
  ASSERT_EQ(testTaskSequential.validation(), true);
  testTaskSequential.pre_processing();
  testTaskSequential.run();
  testTaskSequential.post_processing();

  ASSERT_EQ(out.size(), res.size());
  for (size_t i = 0; i < res.size(); i++) {
    ASSERT_EQ(out[i], res[i]);
  }
}

TEST(kistrimova_e_graham_alg_seq, t2) {
  // Create data
  std::vector<point> in{{-2, -2}, {4, 0}, {3, 0}};
  std::vector<point> out(in.size());
  std::vector<point> res{{-2, -2}, {4, 0}, {3, 0}};

  // Create TaskData
  std::shared_ptr<ppc::core::TaskData> taskDataSeq = std::make_shared<ppc::core::TaskData>();
  taskDataSeq->inputs.emplace_back(reinterpret_cast<uint8_t *>(in.data()));
  taskDataSeq->inputs_count.emplace_back(in.size());
  taskDataSeq->outputs.emplace_back(reinterpret_cast<uint8_t *>(out.data()));
  taskDataSeq->outputs_count.emplace_back(out.size());

  // Create Task
  GrahamAlgTask testTaskSequential(taskDataSeq);
  ASSERT_EQ(testTaskSequential.validation(), true);
  testTaskSequential.pre_processing();
  testTaskSequential.run();
  testTaskSequential.post_processing();

  ASSERT_EQ(out.size(), res.size());
  for (size_t i = 0; i < res.size(); i++) {
    ASSERT_EQ(out[i], res[i]);
  }
}

TEST(kistrimova_e_graham_alg_seq, t3) {
  // Create data
  std::vector<point> in{{-2, -2}, {4, 0}, {3, 0}};
  std::vector<point> out(in.size());
  std::vector<point> res{{-2, -2}, {4, 0}, {3, 0}};

  // Create TaskData
  std::shared_ptr<ppc::core::TaskData> taskDataSeq = std::make_shared<ppc::core::TaskData>();
  taskDataSeq->inputs.emplace_back(reinterpret_cast<uint8_t *>(in.data()));
  taskDataSeq->inputs_count.emplace_back(in.size());
  taskDataSeq->outputs.emplace_back(reinterpret_cast<uint8_t *>(out.data()));
  taskDataSeq->outputs_count.emplace_back(out.size());

  // Create Task
  GrahamAlgTask testTaskSequential(taskDataSeq);
  ASSERT_EQ(testTaskSequential.validation(), true);
  testTaskSequential.pre_processing();
  testTaskSequential.run();
  testTaskSequential.post_processing();

  ASSERT_EQ(out.size(), res.size());
  for (size_t i = 0; i < res.size(); i++) {
    ASSERT_EQ(out[i], res[i]);
  }
}

TEST(kistrimova_e_graham_alg_seq, t4) {
  // Create data
  std::vector<point> in{{-2, -2}, {4, 0}, {3, 0}};
  std::vector<point> out(in.size());
  std::vector<point> res{{-2, -2}, {4, 0}, {3, 0}};

  // Create TaskData
  std::shared_ptr<ppc::core::TaskData> taskDataSeq = std::make_shared<ppc::core::TaskData>();
  taskDataSeq->inputs.emplace_back(reinterpret_cast<uint8_t *>(in.data()));
  taskDataSeq->inputs_count.emplace_back(in.size());
  taskDataSeq->outputs.emplace_back(reinterpret_cast<uint8_t *>(out.data()));
  taskDataSeq->outputs_count.emplace_back(out.size());

  // Create Task
  GrahamAlgTask testTaskSequential(taskDataSeq);
  ASSERT_EQ(testTaskSequential.validation(), true);
  testTaskSequential.pre_processing();
  testTaskSequential.run();
  testTaskSequential.post_processing();

  ASSERT_EQ(out.size(), res.size());
  for (size_t i = 0; i < res.size(); i++) {
    ASSERT_EQ(out[i], res[i]);
  }
}

TEST(kistrimova_e_graham_alg_seq, t5) {
  // Create data
  std::vector<point> in{{-2, -2}, {4, 0}, {3, 0}};
  std::vector<point> out(in.size());
  std::vector<point> res{{-2, -2}, {4, 0}, {3, 0}};

  // Create TaskData
  std::shared_ptr<ppc::core::TaskData> taskDataSeq = std::make_shared<ppc::core::TaskData>();
  taskDataSeq->inputs.emplace_back(reinterpret_cast<uint8_t *>(in.data()));
  taskDataSeq->inputs_count.emplace_back(in.size());
  taskDataSeq->outputs.emplace_back(reinterpret_cast<uint8_t *>(out.data()));
  taskDataSeq->outputs_count.emplace_back(out.size());

  // Create Task
  GrahamAlgTask testTaskSequential(taskDataSeq);
  ASSERT_EQ(testTaskSequential.validation(), true);
  testTaskSequential.pre_processing();
  testTaskSequential.run();
  testTaskSequential.post_processing();

  ASSERT_EQ(out.size(), res.size());
  for (size_t i = 0; i < res.size(); i++) {
    ASSERT_EQ(out[i], res[i]);
  }
}