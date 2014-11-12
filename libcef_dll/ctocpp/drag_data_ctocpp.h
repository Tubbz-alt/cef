// Copyright (c) 2014 The Chromium Embedded Framework Authors. All rights
// reserved. Use of this source code is governed by a BSD-style license that
// can be found in the LICENSE file.
//
// ---------------------------------------------------------------------------
//
// This file was generated by the CEF translator tool. If making changes by
// hand only do so within the body of existing method and function
// implementations. See the translator.README.txt file in the tools directory
// for more information.
//

#ifndef CEF_LIBCEF_DLL_CTOCPP_DRAG_DATA_CTOCPP_H_
#define CEF_LIBCEF_DLL_CTOCPP_DRAG_DATA_CTOCPP_H_
#pragma once

#ifndef USING_CEF_SHARED
#pragma message("Warning: "__FILE__" may be accessed wrapper-side only")
#else  // USING_CEF_SHARED

#include <vector>
#include "include/cef_drag_data.h"
#include "include/capi/cef_drag_data_capi.h"
#include "libcef_dll/ctocpp/ctocpp.h"

// Wrap a C structure with a C++ class.
// This class may be instantiated and accessed wrapper-side only.
class CefDragDataCToCpp
    : public CefCToCpp<CefDragDataCToCpp, CefDragData, cef_drag_data_t> {
 public:
  explicit CefDragDataCToCpp(cef_drag_data_t* str)
      : CefCToCpp<CefDragDataCToCpp, CefDragData, cef_drag_data_t>(str) {}

  // CefDragData methods
  virtual CefRefPtr<CefDragData> Clone() OVERRIDE;
  virtual bool IsReadOnly() OVERRIDE;
  virtual bool IsLink() OVERRIDE;
  virtual bool IsFragment() OVERRIDE;
  virtual bool IsFile() OVERRIDE;
  virtual CefString GetLinkURL() OVERRIDE;
  virtual CefString GetLinkTitle() OVERRIDE;
  virtual CefString GetLinkMetadata() OVERRIDE;
  virtual CefString GetFragmentText() OVERRIDE;
  virtual CefString GetFragmentHtml() OVERRIDE;
  virtual CefString GetFragmentBaseURL() OVERRIDE;
  virtual CefString GetFileName() OVERRIDE;
  virtual size_t GetFileContents(CefRefPtr<CefStreamWriter> writer) OVERRIDE;
  virtual bool GetFileNames(std::vector<CefString>& names) OVERRIDE;
  virtual void SetLinkURL(const CefString& url) OVERRIDE;
  virtual void SetLinkTitle(const CefString& title) OVERRIDE;
  virtual void SetLinkMetadata(const CefString& data) OVERRIDE;
  virtual void SetFragmentText(const CefString& text) OVERRIDE;
  virtual void SetFragmentHtml(const CefString& html) OVERRIDE;
  virtual void SetFragmentBaseURL(const CefString& base_url) OVERRIDE;
  virtual void ResetFileContents() OVERRIDE;
  virtual void AddFile(const CefString& path,
      const CefString& display_name) OVERRIDE;
};

#endif  // USING_CEF_SHARED
#endif  // CEF_LIBCEF_DLL_CTOCPP_DRAG_DATA_CTOCPP_H_

