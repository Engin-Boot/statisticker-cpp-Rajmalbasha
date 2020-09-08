#include <vector>

namespace Statistics {
    struct Stats
    {
        float average,min,max;
    };
    Stats ComputeStatistics(const std::vector<float>& );
}
