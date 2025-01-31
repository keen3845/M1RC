// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from rosidl_generator_c:msg/Defaults.idl
// generated code does not contain a copyright notice

#ifndef ROSIDL_GENERATOR_C__MSG__DETAIL__DEFAULTS__FUNCTIONS_H_
#define ROSIDL_GENERATOR_C__MSG__DETAIL__DEFAULTS__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "rosidl_generator_c/msg/rosidl_generator_c__visibility_control.h"

#include "rosidl_generator_c/msg/detail/defaults__struct.h"

/// Initialize msg/Defaults message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * rosidl_generator_c__msg__Defaults
 * )) before or use
 * rosidl_generator_c__msg__Defaults__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_rosidl_generator_c
bool
rosidl_generator_c__msg__Defaults__init(rosidl_generator_c__msg__Defaults * msg);

/// Finalize msg/Defaults message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rosidl_generator_c
void
rosidl_generator_c__msg__Defaults__fini(rosidl_generator_c__msg__Defaults * msg);

/// Create msg/Defaults message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * rosidl_generator_c__msg__Defaults__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rosidl_generator_c
rosidl_generator_c__msg__Defaults *
rosidl_generator_c__msg__Defaults__create();

/// Destroy msg/Defaults message.
/**
 * It calls
 * rosidl_generator_c__msg__Defaults__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rosidl_generator_c
void
rosidl_generator_c__msg__Defaults__destroy(rosidl_generator_c__msg__Defaults * msg);

/// Check for msg/Defaults message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_rosidl_generator_c
bool
rosidl_generator_c__msg__Defaults__are_equal(const rosidl_generator_c__msg__Defaults * lhs, const rosidl_generator_c__msg__Defaults * rhs);

/// Copy a msg/Defaults message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_rosidl_generator_c
bool
rosidl_generator_c__msg__Defaults__copy(
  const rosidl_generator_c__msg__Defaults * input,
  rosidl_generator_c__msg__Defaults * output);

/// Initialize array of msg/Defaults messages.
/**
 * It allocates the memory for the number of elements and calls
 * rosidl_generator_c__msg__Defaults__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_rosidl_generator_c
bool
rosidl_generator_c__msg__Defaults__Sequence__init(rosidl_generator_c__msg__Defaults__Sequence * array, size_t size);

/// Finalize array of msg/Defaults messages.
/**
 * It calls
 * rosidl_generator_c__msg__Defaults__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rosidl_generator_c
void
rosidl_generator_c__msg__Defaults__Sequence__fini(rosidl_generator_c__msg__Defaults__Sequence * array);

/// Create array of msg/Defaults messages.
/**
 * It allocates the memory for the array and calls
 * rosidl_generator_c__msg__Defaults__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rosidl_generator_c
rosidl_generator_c__msg__Defaults__Sequence *
rosidl_generator_c__msg__Defaults__Sequence__create(size_t size);

/// Destroy array of msg/Defaults messages.
/**
 * It calls
 * rosidl_generator_c__msg__Defaults__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rosidl_generator_c
void
rosidl_generator_c__msg__Defaults__Sequence__destroy(rosidl_generator_c__msg__Defaults__Sequence * array);

/// Check for msg/Defaults message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_rosidl_generator_c
bool
rosidl_generator_c__msg__Defaults__Sequence__are_equal(const rosidl_generator_c__msg__Defaults__Sequence * lhs, const rosidl_generator_c__msg__Defaults__Sequence * rhs);

/// Copy an array of msg/Defaults messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_rosidl_generator_c
bool
rosidl_generator_c__msg__Defaults__Sequence__copy(
  const rosidl_generator_c__msg__Defaults__Sequence * input,
  rosidl_generator_c__msg__Defaults__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // ROSIDL_GENERATOR_C__MSG__DETAIL__DEFAULTS__FUNCTIONS_H_
