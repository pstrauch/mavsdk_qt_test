// Copyright 2016 Proyectos y Sistemas de Mantenimiento SL (eProsima).
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

/*!
 * @file QuadAttitudeCommand.h
 * This header file contains the declaration of the described types in the IDL file.
 *
 * This file was generated by the tool gen.
 */

#ifndef _IDL_MSG_QUADATTITUDECOMMAND_H_
#define _IDL_MSG_QUADATTITUDECOMMAND_H_

#include "Header.h"

#include <stdint.h>
#include <array>
#include <string>
#include <vector>
#include <map>
#include <bitset>

#if defined(_WIN32)
#if defined(EPROSIMA_USER_DLL_EXPORT)
#define eProsima_user_DllExport __declspec( dllexport )
#else
#define eProsima_user_DllExport
#endif  // EPROSIMA_USER_DLL_EXPORT
#else
#define eProsima_user_DllExport
#endif  // _WIN32

#if defined(_WIN32)
#if defined(EPROSIMA_USER_DLL_EXPORT)
#if defined(QuadAttitudeCommand_SOURCE)
#define QuadAttitudeCommand_DllAPI __declspec( dllexport )
#else
#define QuadAttitudeCommand_DllAPI __declspec( dllimport )
#endif // QuadAttitudeCommand_SOURCE
#else
#define QuadAttitudeCommand_DllAPI
#endif  // EPROSIMA_USER_DLL_EXPORT
#else
#define QuadAttitudeCommand_DllAPI
#endif // _WIN32

namespace eprosima {
namespace fastcdr {
class Cdr;
} // namespace fastcdr
} // namespace eprosima


namespace idl_msg {
    /*!
     * @brief This class represents the structure QuadAttitudeCommand defined by the user in the IDL file.
     * @ingroup QUADATTITUDECOMMAND
     */
    class QuadAttitudeCommand
    {
    public:

        /*!
         * @brief Default constructor.
         */
        eProsima_user_DllExport QuadAttitudeCommand();

        /*!
         * @brief Default destructor.
         */
        eProsima_user_DllExport ~QuadAttitudeCommand();

        /*!
         * @brief Copy constructor.
         * @param x Reference to the object idl_msg::QuadAttitudeCommand that will be copied.
         */
        eProsima_user_DllExport QuadAttitudeCommand(
                const QuadAttitudeCommand& x);

        /*!
         * @brief Move constructor.
         * @param x Reference to the object idl_msg::QuadAttitudeCommand that will be copied.
         */
        eProsima_user_DllExport QuadAttitudeCommand(
                QuadAttitudeCommand&& x);

        /*!
         * @brief Copy assignment.
         * @param x Reference to the object idl_msg::QuadAttitudeCommand that will be copied.
         */
        eProsima_user_DllExport QuadAttitudeCommand& operator =(
                const QuadAttitudeCommand& x);

        /*!
         * @brief Move assignment.
         * @param x Reference to the object idl_msg::QuadAttitudeCommand that will be copied.
         */
        eProsima_user_DllExport QuadAttitudeCommand& operator =(
                QuadAttitudeCommand&& x);

        /*!
         * @brief This function copies the value in member header
         * @param _header New value to be copied in member header
         */
        eProsima_user_DllExport void header(
                const idl_msg::Header& _header);

        /*!
         * @brief This function moves the value in member header
         * @param _header New value to be moved in member header
         */
        eProsima_user_DllExport void header(
                idl_msg::Header&& _header);

        /*!
         * @brief This function returns a constant reference to member header
         * @return Constant reference to member header
         */
        eProsima_user_DllExport const idl_msg::Header& header() const;

        /*!
         * @brief This function returns a reference to member header
         * @return Reference to member header
         */
        eProsima_user_DllExport idl_msg::Header& header();
        /*!
         * @brief This function sets a value in member thrust
         * @param _thrust New value for member thrust
         */
        eProsima_user_DllExport void thrust(
                float _thrust);

        /*!
         * @brief This function returns the value of member thrust
         * @return Value of member thrust
         */
        eProsima_user_DllExport float thrust() const;

        /*!
         * @brief This function returns a reference to member thrust
         * @return Reference to member thrust
         */
        eProsima_user_DllExport float& thrust();

        /*!
         * @brief This function sets a value in member roll
         * @param _roll New value for member roll
         */
        eProsima_user_DllExport void roll(
                float _roll);

        /*!
         * @brief This function returns the value of member roll
         * @return Value of member roll
         */
        eProsima_user_DllExport float roll() const;

        /*!
         * @brief This function returns a reference to member roll
         * @return Reference to member roll
         */
        eProsima_user_DllExport float& roll();

        /*!
         * @brief This function sets a value in member pitch
         * @param _pitch New value for member pitch
         */
        eProsima_user_DllExport void pitch(
                float _pitch);

        /*!
         * @brief This function returns the value of member pitch
         * @return Value of member pitch
         */
        eProsima_user_DllExport float pitch() const;

        /*!
         * @brief This function returns a reference to member pitch
         * @return Reference to member pitch
         */
        eProsima_user_DllExport float& pitch();

        /*!
         * @brief This function sets a value in member yaw
         * @param _yaw New value for member yaw
         */
        eProsima_user_DllExport void yaw(
                float _yaw);

        /*!
         * @brief This function returns the value of member yaw
         * @return Value of member yaw
         */
        eProsima_user_DllExport float yaw() const;

        /*!
         * @brief This function returns a reference to member yaw
         * @return Reference to member yaw
         */
        eProsima_user_DllExport float& yaw();


        /*!
         * @brief This function returns the maximum serialized size of an object
         * depending on the buffer alignment.
         * @param current_alignment Buffer alignment.
         * @return Maximum serialized size.
         */
        eProsima_user_DllExport static size_t getMaxCdrSerializedSize(
                size_t current_alignment = 0);

        /*!
         * @brief This function returns the serialized size of a data depending on the buffer alignment.
         * @param data Data which is calculated its serialized size.
         * @param current_alignment Buffer alignment.
         * @return Serialized size.
         */
        eProsima_user_DllExport static size_t getCdrSerializedSize(
                const idl_msg::QuadAttitudeCommand& data,
                size_t current_alignment = 0);


        /*!
         * @brief This function serializes an object using CDR serialization.
         * @param cdr CDR serialization object.
         */
        eProsima_user_DllExport void serialize(
                eprosima::fastcdr::Cdr& cdr) const;

        /*!
         * @brief This function deserializes an object using CDR serialization.
         * @param cdr CDR serialization object.
         */
        eProsima_user_DllExport void deserialize(
                eprosima::fastcdr::Cdr& cdr);



        /*!
         * @brief This function returns the maximum serialized size of the Key of an object
         * depending on the buffer alignment.
         * @param current_alignment Buffer alignment.
         * @return Maximum serialized size.
         */
        eProsima_user_DllExport static size_t getKeyMaxCdrSerializedSize(
                size_t current_alignment = 0);

        /*!
         * @brief This function tells you if the Key has been defined for this type
         */
        eProsima_user_DllExport static bool isKeyDefined();

        /*!
         * @brief This function serializes the key members of an object using CDR serialization.
         * @param cdr CDR serialization object.
         */
        eProsima_user_DllExport void serializeKey(
                eprosima::fastcdr::Cdr& cdr) const;

    private:

        idl_msg::Header m_header;
        float m_thrust;
        float m_roll;
        float m_pitch;
        float m_yaw;
    };
} // namespace idl_msg

#endif // _IDL_MSG_QUADATTITUDECOMMAND_H_