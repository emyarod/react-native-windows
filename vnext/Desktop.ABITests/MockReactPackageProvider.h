// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once

#include <winrt/Microsoft.ReactNative.h>
#include <functional>

using namespace winrt::Microsoft::ReactNative;

namespace ABITests {

class MockReactPackageProvider : public winrt::implements<MockReactPackageProvider, IReactPackageProvider> {
 public:
  MockReactPackageProvider(){};
  void CreatePackage(IReactPackageBuilder const &packageBuilder) {
    MockCreatePackage(packageBuilder);
  };

  std::function<void(IReactPackageBuilder const &)> MockCreatePackage;
};

} // namespace ABITests
