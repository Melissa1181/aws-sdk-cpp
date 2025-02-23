﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotfleetwise/IoTFleetWise_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotfleetwise/model/NetworkInterfaceType.h>
#include <aws/iotfleetwise/model/CanInterface.h>
#include <aws/iotfleetwise/model/ObdInterface.h>
#include <aws/iotfleetwise/model/VehicleMiddleware.h>
#include <aws/iotfleetwise/model/CustomDecodingInterface.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace IoTFleetWise
{
namespace Model
{

  /**
   * <p>Represents a node and its specifications in an in-vehicle communication
   * network. All signal decoders must be associated with a network node. </p> <p> To
   * return this information about all the network interfaces specified in a decoder
   * manifest, use the API operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotfleetwise-2021-06-17/NetworkInterface">AWS
   * API Reference</a></p>
   */
  class NetworkInterface
  {
  public:
    AWS_IOTFLEETWISE_API NetworkInterface();
    AWS_IOTFLEETWISE_API NetworkInterface(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTFLEETWISE_API NetworkInterface& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTFLEETWISE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the network interface.</p>
     */
    inline const Aws::String& GetInterfaceId() const{ return m_interfaceId; }
    inline bool InterfaceIdHasBeenSet() const { return m_interfaceIdHasBeenSet; }
    inline void SetInterfaceId(const Aws::String& value) { m_interfaceIdHasBeenSet = true; m_interfaceId = value; }
    inline void SetInterfaceId(Aws::String&& value) { m_interfaceIdHasBeenSet = true; m_interfaceId = std::move(value); }
    inline void SetInterfaceId(const char* value) { m_interfaceIdHasBeenSet = true; m_interfaceId.assign(value); }
    inline NetworkInterface& WithInterfaceId(const Aws::String& value) { SetInterfaceId(value); return *this;}
    inline NetworkInterface& WithInterfaceId(Aws::String&& value) { SetInterfaceId(std::move(value)); return *this;}
    inline NetworkInterface& WithInterfaceId(const char* value) { SetInterfaceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The network protocol for the vehicle. For example, <code>CAN_SIGNAL</code>
     * specifies a protocol that defines how data is communicated between electronic
     * control units (ECUs). <code>OBD_SIGNAL</code> specifies a protocol that defines
     * how self-diagnostic data is communicated between ECUs.</p>
     */
    inline const NetworkInterfaceType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const NetworkInterfaceType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(NetworkInterfaceType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline NetworkInterface& WithType(const NetworkInterfaceType& value) { SetType(value); return *this;}
    inline NetworkInterface& WithType(NetworkInterfaceType&& value) { SetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about a network interface specified by the Controller Area
     * Network (CAN) protocol.</p>
     */
    inline const CanInterface& GetCanInterface() const{ return m_canInterface; }
    inline bool CanInterfaceHasBeenSet() const { return m_canInterfaceHasBeenSet; }
    inline void SetCanInterface(const CanInterface& value) { m_canInterfaceHasBeenSet = true; m_canInterface = value; }
    inline void SetCanInterface(CanInterface&& value) { m_canInterfaceHasBeenSet = true; m_canInterface = std::move(value); }
    inline NetworkInterface& WithCanInterface(const CanInterface& value) { SetCanInterface(value); return *this;}
    inline NetworkInterface& WithCanInterface(CanInterface&& value) { SetCanInterface(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about a network interface specified by the on-board diagnostic
     * (OBD) II protocol.</p>
     */
    inline const ObdInterface& GetObdInterface() const{ return m_obdInterface; }
    inline bool ObdInterfaceHasBeenSet() const { return m_obdInterfaceHasBeenSet; }
    inline void SetObdInterface(const ObdInterface& value) { m_obdInterfaceHasBeenSet = true; m_obdInterface = value; }
    inline void SetObdInterface(ObdInterface&& value) { m_obdInterfaceHasBeenSet = true; m_obdInterface = std::move(value); }
    inline NetworkInterface& WithObdInterface(const ObdInterface& value) { SetObdInterface(value); return *this;}
    inline NetworkInterface& WithObdInterface(ObdInterface&& value) { SetObdInterface(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The vehicle middleware defined as a type of network interface. Examples of
     * vehicle middleware include <code>ROS2</code> and <code>SOME/IP</code>.</p>
     */
    inline const VehicleMiddleware& GetVehicleMiddleware() const{ return m_vehicleMiddleware; }
    inline bool VehicleMiddlewareHasBeenSet() const { return m_vehicleMiddlewareHasBeenSet; }
    inline void SetVehicleMiddleware(const VehicleMiddleware& value) { m_vehicleMiddlewareHasBeenSet = true; m_vehicleMiddleware = value; }
    inline void SetVehicleMiddleware(VehicleMiddleware&& value) { m_vehicleMiddlewareHasBeenSet = true; m_vehicleMiddleware = std::move(value); }
    inline NetworkInterface& WithVehicleMiddleware(const VehicleMiddleware& value) { SetVehicleMiddleware(value); return *this;}
    inline NetworkInterface& WithVehicleMiddleware(VehicleMiddleware&& value) { SetVehicleMiddleware(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about a <a
     * href="https://docs.aws.amazon.com/iot-fleetwise/latest/APIReference/API_CustomDecodingInterface.html">custom
     * network interface</a>.</p>
     */
    inline const CustomDecodingInterface& GetCustomDecodingInterface() const{ return m_customDecodingInterface; }
    inline bool CustomDecodingInterfaceHasBeenSet() const { return m_customDecodingInterfaceHasBeenSet; }
    inline void SetCustomDecodingInterface(const CustomDecodingInterface& value) { m_customDecodingInterfaceHasBeenSet = true; m_customDecodingInterface = value; }
    inline void SetCustomDecodingInterface(CustomDecodingInterface&& value) { m_customDecodingInterfaceHasBeenSet = true; m_customDecodingInterface = std::move(value); }
    inline NetworkInterface& WithCustomDecodingInterface(const CustomDecodingInterface& value) { SetCustomDecodingInterface(value); return *this;}
    inline NetworkInterface& WithCustomDecodingInterface(CustomDecodingInterface&& value) { SetCustomDecodingInterface(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_interfaceId;
    bool m_interfaceIdHasBeenSet = false;

    NetworkInterfaceType m_type;
    bool m_typeHasBeenSet = false;

    CanInterface m_canInterface;
    bool m_canInterfaceHasBeenSet = false;

    ObdInterface m_obdInterface;
    bool m_obdInterfaceHasBeenSet = false;

    VehicleMiddleware m_vehicleMiddleware;
    bool m_vehicleMiddlewareHasBeenSet = false;

    CustomDecodingInterface m_customDecodingInterface;
    bool m_customDecodingInterfaceHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTFleetWise
} // namespace Aws
