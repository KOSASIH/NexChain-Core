# NexChain API Reference

## Introduction
This document provides a comprehensive reference for the NexChain API, including endpoints, request/response formats, and examples.

## Base URL

[https://api.nexchain.io/v1](https://api.nexchain.io/v1)


## Endpoints

### 1. **Get Block**
- **Endpoint**: `/block/{block_id}`
- **Method**: `GET`
- **Description**: Retrieves information about a specific block.
- **Parameters**:
  - `block_id`: The ID of the block to retrieve.
- **Response**:
  ```json
  1 {
  2   "block_id": "string",
  3   "transactions": [...],
  4   "timestamp": "string",
  5   "previous_block_id": "string"
  6 }
  ```

### 2. **Submit Transaction**
- **Endpoint**: /transaction
- **Method**: POST
- **Description**: Submits a new transaction to the network.
Request Body
  ```json
  1 {
  2   "from": "string",
  3   "to": "string",
  4   "amount": "number",
  5   "data": "string"
  6 }
  ```

Response
  ```json
  1 {
  2   "transaction_id": "string",
  3   "status": "string"
  4 }
  ```

## Conclusion
Refer to this document for detailed information on all available API endpoints and their usage.
