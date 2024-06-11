// Copyright 2024 Kistrimova Ekaterina
#include <gtest/gtest.h>

#include <vector>

#include "core/perf/include/perf.hpp"
#include "seq/kistrimova_e_graham_alg/include/ops_seq.hpp"

TEST(kistrimova_e_graham_alg_seq_perf_test, test_pipeline_run) {
  // Create data
  std::vector<point> in{{9, 19}, {15, 20}, {8, 8}, {16, 16}, {6, 6}, {3, 20}, {7, 1}, {20, 15}, {0, 2}, {8, 15}};
  std::vector<point> out(in.size());
  std::vector<point> res{{0, 2}, {7, 1}, {20, 15}, {15, 20}, {3, 20}};

  // Create TaskData
  std::shared_ptr<ppc::core::TaskData> taskDataSeq = std::make_shared<ppc::core::TaskData>();
  taskDataSeq->inputs.emplace_back(reinterpret_cast<uint8_t *>(in.data()));
  taskDataSeq->inputs_count.emplace_back(in.size());
  taskDataSeq->outputs.emplace_back(reinterpret_cast<uint8_t *>(out.data()));
  taskDataSeq->outputs_count.emplace_back(out.size());

  // Create Task
  auto testTaskSequential = std::make_shared<GrahamAlgTask>(taskDataSeq);

  // Create Perf attributes
  auto perfAttr = std::make_shared<ppc::core::PerfAttr>();
  perfAttr->num_running = 10;
  const auto t0 = std::chrono::high_resolution_clock::now();
  perfAttr->current_timer = [&] {
    auto current_time_point = std::chrono::high_resolution_clock::now();
    auto duration = std::chrono::duration_cast<std::chrono::nanoseconds>(current_time_point - t0).count();
    return static_cast<double>(duration) * 1e-9;
  };

  // Create and init perf results
  auto perfResults = std::make_shared<ppc::core::PerfResults>();

  // Create Perf analyzer
  auto perfAnalyzer = std::make_shared<ppc::core::Perf>(testTaskSequential);
  perfAnalyzer->pipeline_run(perfAttr, perfResults);
  ppc::core::Perf::print_perf_statistic(perfResults);

  ASSERT_EQ(out.size(), res.size());
  for (size_t i = 0; i < res.size(); i++) {
    ASSERT_EQ(out[i], res[i]);
  }
}

TEST(kistrimova_e_graham_alg_seq_perf_test, test_task_run) {
  // Create data
  std::vector<point> in{{9, 19}, {15, 20}, {8, 8}, {16, 16}, {6, 6}, {3, 20}, {7, 1}, {20, 15}, {0, 2}, {8, 15}};
  std::vector<point> out(in.size());
  std::vector<point> res{{0, 2}, {7, 1}, {20, 15}, {15, 20}, {3, 20}};

  // Create TaskData
  std::shared_ptr<ppc::core::TaskData> taskDataSeq = std::make_shared<ppc::core::TaskData>();
  taskDataSeq->inputs.emplace_back(reinterpret_cast<uint8_t *>(in.data()));
  taskDataSeq->inputs_count.emplace_back(in.size());
  taskDataSeq->outputs.emplace_back(reinterpret_cast<uint8_t *>(out.data()));
  taskDataSeq->outputs_count.emplace_back(out.size());

  // Create Task
  auto testTaskSequential = std::make_shared<GrahamAlgTask>(taskDataSeq);

  // Create Perf attributes
  auto perfAttr = std::make_shared<ppc::core::PerfAttr>();
  perfAttr->num_running = 10;
  const auto t0 = std::chrono::high_resolution_clock::now();
  perfAttr->current_timer = [&] {
    auto current_time_point = std::chrono::high_resolution_clock::now();
    auto duration = std::chrono::duration_cast<std::chrono::nanoseconds>(current_time_point - t0).count();
    return static_cast<double>(duration) * 1e-9;
  };

  // Create and init perf results
  auto perfResults = std::make_shared<ppc::core::PerfResults>();

  // Create Perf analyzer
  auto perfAnalyzer = std::make_shared<ppc::core::Perf>(testTaskSequential);
  perfAnalyzer->task_run(perfAttr, perfResults);
  ppc::core::Perf::print_perf_statistic(perfResults);

  ASSERT_EQ(out.size(), res.size());
  for (size_t i = 0; i < res.size(); i++) {
    ASSERT_EQ(out[i], res[i]);
  }
}