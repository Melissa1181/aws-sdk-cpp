﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/application-autoscaling/ApplicationAutoScaling_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/application-autoscaling/model/ServiceNamespace.h>
#include <aws/application-autoscaling/model/ScalableDimension.h>
#include <aws/application-autoscaling/model/PolicyType.h>
#include <aws/application-autoscaling/model/StepScalingPolicyConfiguration.h>
#include <aws/application-autoscaling/model/TargetTrackingScalingPolicyConfiguration.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/application-autoscaling/model/Alarm.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace ApplicationAutoScaling
{
namespace Model
{

  /**
   * <p>Represents a scaling policy.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/application-autoscaling-2016-02-06/ScalingPolicy">AWS
   * API Reference</a></p>
   */
  class AWS_APPLICATIONAUTOSCALING_API ScalingPolicy
  {
  public:
    ScalingPolicy();
    ScalingPolicy(const Aws::Utils::Json::JsonValue& jsonValue);
    ScalingPolicy& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of the scaling policy.</p>
     */
    inline const Aws::String& GetPolicyARN() const{ return m_policyARN; }

    /**
     * <p>The Amazon Resource Name (ARN) of the scaling policy.</p>
     */
    inline void SetPolicyARN(const Aws::String& value) { m_policyARNHasBeenSet = true; m_policyARN = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the scaling policy.</p>
     */
    inline void SetPolicyARN(Aws::String&& value) { m_policyARNHasBeenSet = true; m_policyARN = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the scaling policy.</p>
     */
    inline void SetPolicyARN(const char* value) { m_policyARNHasBeenSet = true; m_policyARN.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the scaling policy.</p>
     */
    inline ScalingPolicy& WithPolicyARN(const Aws::String& value) { SetPolicyARN(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the scaling policy.</p>
     */
    inline ScalingPolicy& WithPolicyARN(Aws::String&& value) { SetPolicyARN(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the scaling policy.</p>
     */
    inline ScalingPolicy& WithPolicyARN(const char* value) { SetPolicyARN(value); return *this;}


    /**
     * <p>The name of the scaling policy.</p>
     */
    inline const Aws::String& GetPolicyName() const{ return m_policyName; }

    /**
     * <p>The name of the scaling policy.</p>
     */
    inline void SetPolicyName(const Aws::String& value) { m_policyNameHasBeenSet = true; m_policyName = value; }

    /**
     * <p>The name of the scaling policy.</p>
     */
    inline void SetPolicyName(Aws::String&& value) { m_policyNameHasBeenSet = true; m_policyName = std::move(value); }

    /**
     * <p>The name of the scaling policy.</p>
     */
    inline void SetPolicyName(const char* value) { m_policyNameHasBeenSet = true; m_policyName.assign(value); }

    /**
     * <p>The name of the scaling policy.</p>
     */
    inline ScalingPolicy& WithPolicyName(const Aws::String& value) { SetPolicyName(value); return *this;}

    /**
     * <p>The name of the scaling policy.</p>
     */
    inline ScalingPolicy& WithPolicyName(Aws::String&& value) { SetPolicyName(std::move(value)); return *this;}

    /**
     * <p>The name of the scaling policy.</p>
     */
    inline ScalingPolicy& WithPolicyName(const char* value) { SetPolicyName(value); return *this;}


    /**
     * <p>The namespace of the AWS service. For more information, see <a
     * href="http://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html#genref-aws-service-namespaces">AWS
     * Service Namespaces</a> in the <i>Amazon Web Services General Reference</i>.</p>
     */
    inline const ServiceNamespace& GetServiceNamespace() const{ return m_serviceNamespace; }

    /**
     * <p>The namespace of the AWS service. For more information, see <a
     * href="http://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html#genref-aws-service-namespaces">AWS
     * Service Namespaces</a> in the <i>Amazon Web Services General Reference</i>.</p>
     */
    inline void SetServiceNamespace(const ServiceNamespace& value) { m_serviceNamespaceHasBeenSet = true; m_serviceNamespace = value; }

    /**
     * <p>The namespace of the AWS service. For more information, see <a
     * href="http://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html#genref-aws-service-namespaces">AWS
     * Service Namespaces</a> in the <i>Amazon Web Services General Reference</i>.</p>
     */
    inline void SetServiceNamespace(ServiceNamespace&& value) { m_serviceNamespaceHasBeenSet = true; m_serviceNamespace = std::move(value); }

    /**
     * <p>The namespace of the AWS service. For more information, see <a
     * href="http://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html#genref-aws-service-namespaces">AWS
     * Service Namespaces</a> in the <i>Amazon Web Services General Reference</i>.</p>
     */
    inline ScalingPolicy& WithServiceNamespace(const ServiceNamespace& value) { SetServiceNamespace(value); return *this;}

    /**
     * <p>The namespace of the AWS service. For more information, see <a
     * href="http://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html#genref-aws-service-namespaces">AWS
     * Service Namespaces</a> in the <i>Amazon Web Services General Reference</i>.</p>
     */
    inline ScalingPolicy& WithServiceNamespace(ServiceNamespace&& value) { SetServiceNamespace(std::move(value)); return *this;}


    /**
     * <p>The identifier of the resource associated with the scaling policy. This
     * string consists of the resource type and unique identifier.</p> <ul> <li> <p>ECS
     * service - The resource type is <code>service</code> and the unique identifier is
     * the cluster name and service name. Example:
     * <code>service/default/sample-webapp</code>.</p> </li> <li> <p>Spot fleet request
     * - The resource type is <code>spot-fleet-request</code> and the unique identifier
     * is the Spot fleet request ID. Example:
     * <code>spot-fleet-request/sfr-73fbd2ce-aa30-494c-8788-1cee4EXAMPLE</code>.</p>
     * </li> <li> <p>EMR cluster - The resource type is <code>instancegroup</code> and
     * the unique identifier is the cluster ID and instance group ID. Example:
     * <code>instancegroup/j-2EEZNYKUA1NTV/ig-1791Y4E1L8YI0</code>.</p> </li> <li>
     * <p>AppStream 2.0 fleet - The resource type is <code>fleet</code> and the unique
     * identifier is the fleet name. Example: <code>fleet/sample-fleet</code>.</p>
     * </li> <li> <p>DynamoDB table - The resource type is <code>table</code> and the
     * unique identifier is the resource ID. Example: <code>table/my-table</code>.</p>
     * </li> <li> <p>DynamoDB global secondary index - The resource type is
     * <code>index</code> and the unique identifier is the resource ID. Example:
     * <code>table/my-table/index/my-table-index</code>.</p> </li> <li> <p>Aurora DB
     * cluster - The resource type is <code>cluster</code> and the unique identifier is
     * the cluster name. Example: <code>cluster:my-db-cluster</code>.</p> </li> <li>
     * <p>Amazon SageMaker endpoint variants - The resource type is
     * <code>variant</code> and the unique identifier is the resource ID. Example:
     * <code>endpoint/my-end-point/variant/KMeansClustering</code>.</p> </li> </ul>
     */
    inline const Aws::String& GetResourceId() const{ return m_resourceId; }

    /**
     * <p>The identifier of the resource associated with the scaling policy. This
     * string consists of the resource type and unique identifier.</p> <ul> <li> <p>ECS
     * service - The resource type is <code>service</code> and the unique identifier is
     * the cluster name and service name. Example:
     * <code>service/default/sample-webapp</code>.</p> </li> <li> <p>Spot fleet request
     * - The resource type is <code>spot-fleet-request</code> and the unique identifier
     * is the Spot fleet request ID. Example:
     * <code>spot-fleet-request/sfr-73fbd2ce-aa30-494c-8788-1cee4EXAMPLE</code>.</p>
     * </li> <li> <p>EMR cluster - The resource type is <code>instancegroup</code> and
     * the unique identifier is the cluster ID and instance group ID. Example:
     * <code>instancegroup/j-2EEZNYKUA1NTV/ig-1791Y4E1L8YI0</code>.</p> </li> <li>
     * <p>AppStream 2.0 fleet - The resource type is <code>fleet</code> and the unique
     * identifier is the fleet name. Example: <code>fleet/sample-fleet</code>.</p>
     * </li> <li> <p>DynamoDB table - The resource type is <code>table</code> and the
     * unique identifier is the resource ID. Example: <code>table/my-table</code>.</p>
     * </li> <li> <p>DynamoDB global secondary index - The resource type is
     * <code>index</code> and the unique identifier is the resource ID. Example:
     * <code>table/my-table/index/my-table-index</code>.</p> </li> <li> <p>Aurora DB
     * cluster - The resource type is <code>cluster</code> and the unique identifier is
     * the cluster name. Example: <code>cluster:my-db-cluster</code>.</p> </li> <li>
     * <p>Amazon SageMaker endpoint variants - The resource type is
     * <code>variant</code> and the unique identifier is the resource ID. Example:
     * <code>endpoint/my-end-point/variant/KMeansClustering</code>.</p> </li> </ul>
     */
    inline void SetResourceId(const Aws::String& value) { m_resourceIdHasBeenSet = true; m_resourceId = value; }

    /**
     * <p>The identifier of the resource associated with the scaling policy. This
     * string consists of the resource type and unique identifier.</p> <ul> <li> <p>ECS
     * service - The resource type is <code>service</code> and the unique identifier is
     * the cluster name and service name. Example:
     * <code>service/default/sample-webapp</code>.</p> </li> <li> <p>Spot fleet request
     * - The resource type is <code>spot-fleet-request</code> and the unique identifier
     * is the Spot fleet request ID. Example:
     * <code>spot-fleet-request/sfr-73fbd2ce-aa30-494c-8788-1cee4EXAMPLE</code>.</p>
     * </li> <li> <p>EMR cluster - The resource type is <code>instancegroup</code> and
     * the unique identifier is the cluster ID and instance group ID. Example:
     * <code>instancegroup/j-2EEZNYKUA1NTV/ig-1791Y4E1L8YI0</code>.</p> </li> <li>
     * <p>AppStream 2.0 fleet - The resource type is <code>fleet</code> and the unique
     * identifier is the fleet name. Example: <code>fleet/sample-fleet</code>.</p>
     * </li> <li> <p>DynamoDB table - The resource type is <code>table</code> and the
     * unique identifier is the resource ID. Example: <code>table/my-table</code>.</p>
     * </li> <li> <p>DynamoDB global secondary index - The resource type is
     * <code>index</code> and the unique identifier is the resource ID. Example:
     * <code>table/my-table/index/my-table-index</code>.</p> </li> <li> <p>Aurora DB
     * cluster - The resource type is <code>cluster</code> and the unique identifier is
     * the cluster name. Example: <code>cluster:my-db-cluster</code>.</p> </li> <li>
     * <p>Amazon SageMaker endpoint variants - The resource type is
     * <code>variant</code> and the unique identifier is the resource ID. Example:
     * <code>endpoint/my-end-point/variant/KMeansClustering</code>.</p> </li> </ul>
     */
    inline void SetResourceId(Aws::String&& value) { m_resourceIdHasBeenSet = true; m_resourceId = std::move(value); }

    /**
     * <p>The identifier of the resource associated with the scaling policy. This
     * string consists of the resource type and unique identifier.</p> <ul> <li> <p>ECS
     * service - The resource type is <code>service</code> and the unique identifier is
     * the cluster name and service name. Example:
     * <code>service/default/sample-webapp</code>.</p> </li> <li> <p>Spot fleet request
     * - The resource type is <code>spot-fleet-request</code> and the unique identifier
     * is the Spot fleet request ID. Example:
     * <code>spot-fleet-request/sfr-73fbd2ce-aa30-494c-8788-1cee4EXAMPLE</code>.</p>
     * </li> <li> <p>EMR cluster - The resource type is <code>instancegroup</code> and
     * the unique identifier is the cluster ID and instance group ID. Example:
     * <code>instancegroup/j-2EEZNYKUA1NTV/ig-1791Y4E1L8YI0</code>.</p> </li> <li>
     * <p>AppStream 2.0 fleet - The resource type is <code>fleet</code> and the unique
     * identifier is the fleet name. Example: <code>fleet/sample-fleet</code>.</p>
     * </li> <li> <p>DynamoDB table - The resource type is <code>table</code> and the
     * unique identifier is the resource ID. Example: <code>table/my-table</code>.</p>
     * </li> <li> <p>DynamoDB global secondary index - The resource type is
     * <code>index</code> and the unique identifier is the resource ID. Example:
     * <code>table/my-table/index/my-table-index</code>.</p> </li> <li> <p>Aurora DB
     * cluster - The resource type is <code>cluster</code> and the unique identifier is
     * the cluster name. Example: <code>cluster:my-db-cluster</code>.</p> </li> <li>
     * <p>Amazon SageMaker endpoint variants - The resource type is
     * <code>variant</code> and the unique identifier is the resource ID. Example:
     * <code>endpoint/my-end-point/variant/KMeansClustering</code>.</p> </li> </ul>
     */
    inline void SetResourceId(const char* value) { m_resourceIdHasBeenSet = true; m_resourceId.assign(value); }

    /**
     * <p>The identifier of the resource associated with the scaling policy. This
     * string consists of the resource type and unique identifier.</p> <ul> <li> <p>ECS
     * service - The resource type is <code>service</code> and the unique identifier is
     * the cluster name and service name. Example:
     * <code>service/default/sample-webapp</code>.</p> </li> <li> <p>Spot fleet request
     * - The resource type is <code>spot-fleet-request</code> and the unique identifier
     * is the Spot fleet request ID. Example:
     * <code>spot-fleet-request/sfr-73fbd2ce-aa30-494c-8788-1cee4EXAMPLE</code>.</p>
     * </li> <li> <p>EMR cluster - The resource type is <code>instancegroup</code> and
     * the unique identifier is the cluster ID and instance group ID. Example:
     * <code>instancegroup/j-2EEZNYKUA1NTV/ig-1791Y4E1L8YI0</code>.</p> </li> <li>
     * <p>AppStream 2.0 fleet - The resource type is <code>fleet</code> and the unique
     * identifier is the fleet name. Example: <code>fleet/sample-fleet</code>.</p>
     * </li> <li> <p>DynamoDB table - The resource type is <code>table</code> and the
     * unique identifier is the resource ID. Example: <code>table/my-table</code>.</p>
     * </li> <li> <p>DynamoDB global secondary index - The resource type is
     * <code>index</code> and the unique identifier is the resource ID. Example:
     * <code>table/my-table/index/my-table-index</code>.</p> </li> <li> <p>Aurora DB
     * cluster - The resource type is <code>cluster</code> and the unique identifier is
     * the cluster name. Example: <code>cluster:my-db-cluster</code>.</p> </li> <li>
     * <p>Amazon SageMaker endpoint variants - The resource type is
     * <code>variant</code> and the unique identifier is the resource ID. Example:
     * <code>endpoint/my-end-point/variant/KMeansClustering</code>.</p> </li> </ul>
     */
    inline ScalingPolicy& WithResourceId(const Aws::String& value) { SetResourceId(value); return *this;}

    /**
     * <p>The identifier of the resource associated with the scaling policy. This
     * string consists of the resource type and unique identifier.</p> <ul> <li> <p>ECS
     * service - The resource type is <code>service</code> and the unique identifier is
     * the cluster name and service name. Example:
     * <code>service/default/sample-webapp</code>.</p> </li> <li> <p>Spot fleet request
     * - The resource type is <code>spot-fleet-request</code> and the unique identifier
     * is the Spot fleet request ID. Example:
     * <code>spot-fleet-request/sfr-73fbd2ce-aa30-494c-8788-1cee4EXAMPLE</code>.</p>
     * </li> <li> <p>EMR cluster - The resource type is <code>instancegroup</code> and
     * the unique identifier is the cluster ID and instance group ID. Example:
     * <code>instancegroup/j-2EEZNYKUA1NTV/ig-1791Y4E1L8YI0</code>.</p> </li> <li>
     * <p>AppStream 2.0 fleet - The resource type is <code>fleet</code> and the unique
     * identifier is the fleet name. Example: <code>fleet/sample-fleet</code>.</p>
     * </li> <li> <p>DynamoDB table - The resource type is <code>table</code> and the
     * unique identifier is the resource ID. Example: <code>table/my-table</code>.</p>
     * </li> <li> <p>DynamoDB global secondary index - The resource type is
     * <code>index</code> and the unique identifier is the resource ID. Example:
     * <code>table/my-table/index/my-table-index</code>.</p> </li> <li> <p>Aurora DB
     * cluster - The resource type is <code>cluster</code> and the unique identifier is
     * the cluster name. Example: <code>cluster:my-db-cluster</code>.</p> </li> <li>
     * <p>Amazon SageMaker endpoint variants - The resource type is
     * <code>variant</code> and the unique identifier is the resource ID. Example:
     * <code>endpoint/my-end-point/variant/KMeansClustering</code>.</p> </li> </ul>
     */
    inline ScalingPolicy& WithResourceId(Aws::String&& value) { SetResourceId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the resource associated with the scaling policy. This
     * string consists of the resource type and unique identifier.</p> <ul> <li> <p>ECS
     * service - The resource type is <code>service</code> and the unique identifier is
     * the cluster name and service name. Example:
     * <code>service/default/sample-webapp</code>.</p> </li> <li> <p>Spot fleet request
     * - The resource type is <code>spot-fleet-request</code> and the unique identifier
     * is the Spot fleet request ID. Example:
     * <code>spot-fleet-request/sfr-73fbd2ce-aa30-494c-8788-1cee4EXAMPLE</code>.</p>
     * </li> <li> <p>EMR cluster - The resource type is <code>instancegroup</code> and
     * the unique identifier is the cluster ID and instance group ID. Example:
     * <code>instancegroup/j-2EEZNYKUA1NTV/ig-1791Y4E1L8YI0</code>.</p> </li> <li>
     * <p>AppStream 2.0 fleet - The resource type is <code>fleet</code> and the unique
     * identifier is the fleet name. Example: <code>fleet/sample-fleet</code>.</p>
     * </li> <li> <p>DynamoDB table - The resource type is <code>table</code> and the
     * unique identifier is the resource ID. Example: <code>table/my-table</code>.</p>
     * </li> <li> <p>DynamoDB global secondary index - The resource type is
     * <code>index</code> and the unique identifier is the resource ID. Example:
     * <code>table/my-table/index/my-table-index</code>.</p> </li> <li> <p>Aurora DB
     * cluster - The resource type is <code>cluster</code> and the unique identifier is
     * the cluster name. Example: <code>cluster:my-db-cluster</code>.</p> </li> <li>
     * <p>Amazon SageMaker endpoint variants - The resource type is
     * <code>variant</code> and the unique identifier is the resource ID. Example:
     * <code>endpoint/my-end-point/variant/KMeansClustering</code>.</p> </li> </ul>
     */
    inline ScalingPolicy& WithResourceId(const char* value) { SetResourceId(value); return *this;}


    /**
     * <p>The scalable dimension. This string consists of the service namespace,
     * resource type, and scaling property.</p> <ul> <li> <p>
     * <code>ecs:service:DesiredCount</code> - The desired task count of an ECS
     * service.</p> </li> <li> <p> <code>ec2:spot-fleet-request:TargetCapacity</code> -
     * The target capacity of a Spot fleet request.</p> </li> <li> <p>
     * <code>elasticmapreduce:instancegroup:InstanceCount</code> - The instance count
     * of an EMR Instance Group.</p> </li> <li> <p>
     * <code>appstream:fleet:DesiredCapacity</code> - The desired capacity of an
     * AppStream 2.0 fleet.</p> </li> <li> <p>
     * <code>dynamodb:table:ReadCapacityUnits</code> - The provisioned read capacity
     * for a DynamoDB table.</p> </li> <li> <p>
     * <code>dynamodb:table:WriteCapacityUnits</code> - The provisioned write capacity
     * for a DynamoDB table.</p> </li> <li> <p>
     * <code>dynamodb:index:ReadCapacityUnits</code> - The provisioned read capacity
     * for a DynamoDB global secondary index.</p> </li> <li> <p>
     * <code>dynamodb:index:WriteCapacityUnits</code> - The provisioned write capacity
     * for a DynamoDB global secondary index.</p> </li> <li> <p>
     * <code>rds:cluster:ReadReplicaCount</code> - The count of Aurora Replicas in an
     * Aurora DB cluster. Available for Aurora MySQL-compatible edition.</p> </li> <li>
     * <p> <code>sagemaker:variant:DesiredInstanceCount</code> - The number of EC2
     * instances for an Amazon SageMaker model endpoint variant.</p> </li> </ul>
     */
    inline const ScalableDimension& GetScalableDimension() const{ return m_scalableDimension; }

    /**
     * <p>The scalable dimension. This string consists of the service namespace,
     * resource type, and scaling property.</p> <ul> <li> <p>
     * <code>ecs:service:DesiredCount</code> - The desired task count of an ECS
     * service.</p> </li> <li> <p> <code>ec2:spot-fleet-request:TargetCapacity</code> -
     * The target capacity of a Spot fleet request.</p> </li> <li> <p>
     * <code>elasticmapreduce:instancegroup:InstanceCount</code> - The instance count
     * of an EMR Instance Group.</p> </li> <li> <p>
     * <code>appstream:fleet:DesiredCapacity</code> - The desired capacity of an
     * AppStream 2.0 fleet.</p> </li> <li> <p>
     * <code>dynamodb:table:ReadCapacityUnits</code> - The provisioned read capacity
     * for a DynamoDB table.</p> </li> <li> <p>
     * <code>dynamodb:table:WriteCapacityUnits</code> - The provisioned write capacity
     * for a DynamoDB table.</p> </li> <li> <p>
     * <code>dynamodb:index:ReadCapacityUnits</code> - The provisioned read capacity
     * for a DynamoDB global secondary index.</p> </li> <li> <p>
     * <code>dynamodb:index:WriteCapacityUnits</code> - The provisioned write capacity
     * for a DynamoDB global secondary index.</p> </li> <li> <p>
     * <code>rds:cluster:ReadReplicaCount</code> - The count of Aurora Replicas in an
     * Aurora DB cluster. Available for Aurora MySQL-compatible edition.</p> </li> <li>
     * <p> <code>sagemaker:variant:DesiredInstanceCount</code> - The number of EC2
     * instances for an Amazon SageMaker model endpoint variant.</p> </li> </ul>
     */
    inline void SetScalableDimension(const ScalableDimension& value) { m_scalableDimensionHasBeenSet = true; m_scalableDimension = value; }

    /**
     * <p>The scalable dimension. This string consists of the service namespace,
     * resource type, and scaling property.</p> <ul> <li> <p>
     * <code>ecs:service:DesiredCount</code> - The desired task count of an ECS
     * service.</p> </li> <li> <p> <code>ec2:spot-fleet-request:TargetCapacity</code> -
     * The target capacity of a Spot fleet request.</p> </li> <li> <p>
     * <code>elasticmapreduce:instancegroup:InstanceCount</code> - The instance count
     * of an EMR Instance Group.</p> </li> <li> <p>
     * <code>appstream:fleet:DesiredCapacity</code> - The desired capacity of an
     * AppStream 2.0 fleet.</p> </li> <li> <p>
     * <code>dynamodb:table:ReadCapacityUnits</code> - The provisioned read capacity
     * for a DynamoDB table.</p> </li> <li> <p>
     * <code>dynamodb:table:WriteCapacityUnits</code> - The provisioned write capacity
     * for a DynamoDB table.</p> </li> <li> <p>
     * <code>dynamodb:index:ReadCapacityUnits</code> - The provisioned read capacity
     * for a DynamoDB global secondary index.</p> </li> <li> <p>
     * <code>dynamodb:index:WriteCapacityUnits</code> - The provisioned write capacity
     * for a DynamoDB global secondary index.</p> </li> <li> <p>
     * <code>rds:cluster:ReadReplicaCount</code> - The count of Aurora Replicas in an
     * Aurora DB cluster. Available for Aurora MySQL-compatible edition.</p> </li> <li>
     * <p> <code>sagemaker:variant:DesiredInstanceCount</code> - The number of EC2
     * instances for an Amazon SageMaker model endpoint variant.</p> </li> </ul>
     */
    inline void SetScalableDimension(ScalableDimension&& value) { m_scalableDimensionHasBeenSet = true; m_scalableDimension = std::move(value); }

    /**
     * <p>The scalable dimension. This string consists of the service namespace,
     * resource type, and scaling property.</p> <ul> <li> <p>
     * <code>ecs:service:DesiredCount</code> - The desired task count of an ECS
     * service.</p> </li> <li> <p> <code>ec2:spot-fleet-request:TargetCapacity</code> -
     * The target capacity of a Spot fleet request.</p> </li> <li> <p>
     * <code>elasticmapreduce:instancegroup:InstanceCount</code> - The instance count
     * of an EMR Instance Group.</p> </li> <li> <p>
     * <code>appstream:fleet:DesiredCapacity</code> - The desired capacity of an
     * AppStream 2.0 fleet.</p> </li> <li> <p>
     * <code>dynamodb:table:ReadCapacityUnits</code> - The provisioned read capacity
     * for a DynamoDB table.</p> </li> <li> <p>
     * <code>dynamodb:table:WriteCapacityUnits</code> - The provisioned write capacity
     * for a DynamoDB table.</p> </li> <li> <p>
     * <code>dynamodb:index:ReadCapacityUnits</code> - The provisioned read capacity
     * for a DynamoDB global secondary index.</p> </li> <li> <p>
     * <code>dynamodb:index:WriteCapacityUnits</code> - The provisioned write capacity
     * for a DynamoDB global secondary index.</p> </li> <li> <p>
     * <code>rds:cluster:ReadReplicaCount</code> - The count of Aurora Replicas in an
     * Aurora DB cluster. Available for Aurora MySQL-compatible edition.</p> </li> <li>
     * <p> <code>sagemaker:variant:DesiredInstanceCount</code> - The number of EC2
     * instances for an Amazon SageMaker model endpoint variant.</p> </li> </ul>
     */
    inline ScalingPolicy& WithScalableDimension(const ScalableDimension& value) { SetScalableDimension(value); return *this;}

    /**
     * <p>The scalable dimension. This string consists of the service namespace,
     * resource type, and scaling property.</p> <ul> <li> <p>
     * <code>ecs:service:DesiredCount</code> - The desired task count of an ECS
     * service.</p> </li> <li> <p> <code>ec2:spot-fleet-request:TargetCapacity</code> -
     * The target capacity of a Spot fleet request.</p> </li> <li> <p>
     * <code>elasticmapreduce:instancegroup:InstanceCount</code> - The instance count
     * of an EMR Instance Group.</p> </li> <li> <p>
     * <code>appstream:fleet:DesiredCapacity</code> - The desired capacity of an
     * AppStream 2.0 fleet.</p> </li> <li> <p>
     * <code>dynamodb:table:ReadCapacityUnits</code> - The provisioned read capacity
     * for a DynamoDB table.</p> </li> <li> <p>
     * <code>dynamodb:table:WriteCapacityUnits</code> - The provisioned write capacity
     * for a DynamoDB table.</p> </li> <li> <p>
     * <code>dynamodb:index:ReadCapacityUnits</code> - The provisioned read capacity
     * for a DynamoDB global secondary index.</p> </li> <li> <p>
     * <code>dynamodb:index:WriteCapacityUnits</code> - The provisioned write capacity
     * for a DynamoDB global secondary index.</p> </li> <li> <p>
     * <code>rds:cluster:ReadReplicaCount</code> - The count of Aurora Replicas in an
     * Aurora DB cluster. Available for Aurora MySQL-compatible edition.</p> </li> <li>
     * <p> <code>sagemaker:variant:DesiredInstanceCount</code> - The number of EC2
     * instances for an Amazon SageMaker model endpoint variant.</p> </li> </ul>
     */
    inline ScalingPolicy& WithScalableDimension(ScalableDimension&& value) { SetScalableDimension(std::move(value)); return *this;}


    /**
     * <p>The scaling policy type.</p>
     */
    inline const PolicyType& GetPolicyType() const{ return m_policyType; }

    /**
     * <p>The scaling policy type.</p>
     */
    inline void SetPolicyType(const PolicyType& value) { m_policyTypeHasBeenSet = true; m_policyType = value; }

    /**
     * <p>The scaling policy type.</p>
     */
    inline void SetPolicyType(PolicyType&& value) { m_policyTypeHasBeenSet = true; m_policyType = std::move(value); }

    /**
     * <p>The scaling policy type.</p>
     */
    inline ScalingPolicy& WithPolicyType(const PolicyType& value) { SetPolicyType(value); return *this;}

    /**
     * <p>The scaling policy type.</p>
     */
    inline ScalingPolicy& WithPolicyType(PolicyType&& value) { SetPolicyType(std::move(value)); return *this;}


    /**
     * <p>A step scaling policy.</p>
     */
    inline const StepScalingPolicyConfiguration& GetStepScalingPolicyConfiguration() const{ return m_stepScalingPolicyConfiguration; }

    /**
     * <p>A step scaling policy.</p>
     */
    inline void SetStepScalingPolicyConfiguration(const StepScalingPolicyConfiguration& value) { m_stepScalingPolicyConfigurationHasBeenSet = true; m_stepScalingPolicyConfiguration = value; }

    /**
     * <p>A step scaling policy.</p>
     */
    inline void SetStepScalingPolicyConfiguration(StepScalingPolicyConfiguration&& value) { m_stepScalingPolicyConfigurationHasBeenSet = true; m_stepScalingPolicyConfiguration = std::move(value); }

    /**
     * <p>A step scaling policy.</p>
     */
    inline ScalingPolicy& WithStepScalingPolicyConfiguration(const StepScalingPolicyConfiguration& value) { SetStepScalingPolicyConfiguration(value); return *this;}

    /**
     * <p>A step scaling policy.</p>
     */
    inline ScalingPolicy& WithStepScalingPolicyConfiguration(StepScalingPolicyConfiguration&& value) { SetStepScalingPolicyConfiguration(std::move(value)); return *this;}


    /**
     * <p>A target tracking policy.</p>
     */
    inline const TargetTrackingScalingPolicyConfiguration& GetTargetTrackingScalingPolicyConfiguration() const{ return m_targetTrackingScalingPolicyConfiguration; }

    /**
     * <p>A target tracking policy.</p>
     */
    inline void SetTargetTrackingScalingPolicyConfiguration(const TargetTrackingScalingPolicyConfiguration& value) { m_targetTrackingScalingPolicyConfigurationHasBeenSet = true; m_targetTrackingScalingPolicyConfiguration = value; }

    /**
     * <p>A target tracking policy.</p>
     */
    inline void SetTargetTrackingScalingPolicyConfiguration(TargetTrackingScalingPolicyConfiguration&& value) { m_targetTrackingScalingPolicyConfigurationHasBeenSet = true; m_targetTrackingScalingPolicyConfiguration = std::move(value); }

    /**
     * <p>A target tracking policy.</p>
     */
    inline ScalingPolicy& WithTargetTrackingScalingPolicyConfiguration(const TargetTrackingScalingPolicyConfiguration& value) { SetTargetTrackingScalingPolicyConfiguration(value); return *this;}

    /**
     * <p>A target tracking policy.</p>
     */
    inline ScalingPolicy& WithTargetTrackingScalingPolicyConfiguration(TargetTrackingScalingPolicyConfiguration&& value) { SetTargetTrackingScalingPolicyConfiguration(std::move(value)); return *this;}


    /**
     * <p>The CloudWatch alarms associated with the scaling policy.</p>
     */
    inline const Aws::Vector<Alarm>& GetAlarms() const{ return m_alarms; }

    /**
     * <p>The CloudWatch alarms associated with the scaling policy.</p>
     */
    inline void SetAlarms(const Aws::Vector<Alarm>& value) { m_alarmsHasBeenSet = true; m_alarms = value; }

    /**
     * <p>The CloudWatch alarms associated with the scaling policy.</p>
     */
    inline void SetAlarms(Aws::Vector<Alarm>&& value) { m_alarmsHasBeenSet = true; m_alarms = std::move(value); }

    /**
     * <p>The CloudWatch alarms associated with the scaling policy.</p>
     */
    inline ScalingPolicy& WithAlarms(const Aws::Vector<Alarm>& value) { SetAlarms(value); return *this;}

    /**
     * <p>The CloudWatch alarms associated with the scaling policy.</p>
     */
    inline ScalingPolicy& WithAlarms(Aws::Vector<Alarm>&& value) { SetAlarms(std::move(value)); return *this;}

    /**
     * <p>The CloudWatch alarms associated with the scaling policy.</p>
     */
    inline ScalingPolicy& AddAlarms(const Alarm& value) { m_alarmsHasBeenSet = true; m_alarms.push_back(value); return *this; }

    /**
     * <p>The CloudWatch alarms associated with the scaling policy.</p>
     */
    inline ScalingPolicy& AddAlarms(Alarm&& value) { m_alarmsHasBeenSet = true; m_alarms.push_back(std::move(value)); return *this; }


    /**
     * <p>The Unix timestamp for when the scaling policy was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>The Unix timestamp for when the scaling policy was created.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }

    /**
     * <p>The Unix timestamp for when the scaling policy was created.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }

    /**
     * <p>The Unix timestamp for when the scaling policy was created.</p>
     */
    inline ScalingPolicy& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>The Unix timestamp for when the scaling policy was created.</p>
     */
    inline ScalingPolicy& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}

  private:

    Aws::String m_policyARN;
    bool m_policyARNHasBeenSet;

    Aws::String m_policyName;
    bool m_policyNameHasBeenSet;

    ServiceNamespace m_serviceNamespace;
    bool m_serviceNamespaceHasBeenSet;

    Aws::String m_resourceId;
    bool m_resourceIdHasBeenSet;

    ScalableDimension m_scalableDimension;
    bool m_scalableDimensionHasBeenSet;

    PolicyType m_policyType;
    bool m_policyTypeHasBeenSet;

    StepScalingPolicyConfiguration m_stepScalingPolicyConfiguration;
    bool m_stepScalingPolicyConfigurationHasBeenSet;

    TargetTrackingScalingPolicyConfiguration m_targetTrackingScalingPolicyConfiguration;
    bool m_targetTrackingScalingPolicyConfigurationHasBeenSet;

    Aws::Vector<Alarm> m_alarms;
    bool m_alarmsHasBeenSet;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet;
  };

} // namespace Model
} // namespace ApplicationAutoScaling
} // namespace Aws
