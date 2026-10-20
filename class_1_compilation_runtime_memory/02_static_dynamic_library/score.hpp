#pragma once

#if defined(_WIN32) && defined(SCORE_SHARED_BUILD)
#  define SCORE_API __declspec(dllexport)
#elif defined(_WIN32) && defined(SCORE_SHARED_USE)
#  define SCORE_API __declspec(dllimport)
#else
#  define SCORE_API
#endif

// A tiny library function used by both executables.
SCORE_API int award_points(int current_score, int points);
