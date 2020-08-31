#include <vector>

namespace Statistics {
    struct Stats
    {
        float avg,min,max;
    };
    Stats ComputeStatistics(const std::vector<float>& );
}
