
@interface WebInspectorFrontend : NSObject {

    ^{WebInspectorFrontendClient=^^?^{InspectorController}^{Page}{RefPtr<WebCore::InspectorFrontendHost>=^{InspectorFrontendHost}}{unique_ptr<WebCore::InspectorFrontendClientLocal::Settings, std::__1::default_delete<WebCore::InspectorFrontendClientLocal::Settings> >={__compressed_pair<WebCore::InspectorFrontendClientLocal::Settings *, std::__1::default_delete<WebCore::InspectorFrontendClientLocal::Settings> >=^{Settings}}}Bi{Vector<WTF::String, 0, WTF::CrashOnOverflow>=^{String}II}{unique_ptr<WebCore::InspectorBackendDispatchTask, std::__1::default_delete<WebCore::InspectorBackendDispatchTask> >={__compressed_pair<WebCore::InspectorBackendDispatchTask *, std::__1::default_delete<WebCore::InspectorBackendDispatchTask> >=^{InspectorBackendDispatchTask}}}} m_frontendClient;
}

 - (void) showConsole;
 - (BOOL) isDebuggingEnabled;
 - (void) setDebuggingEnabled:(BOOL)a ;
 - (BOOL) isTimelineProfilingEnabled;
 - (void) setTimelineProfilingEnabled:(BOOL)a ;
 - (void) attach;
 - (BOOL) isProfilingJavaScript;
 - (id) initWithFrontendClient:(^{WebInspectorFrontendClient=^^?^{InspectorController}^{Page}{RefPtr<WebCore::InspectorFrontendHost>=^{InspectorFrontendHost}}{unique_ptr<WebCore::InspectorFrontendClientLocal::Settings, std::__1::default_delete<WebCore::InspectorFrontendClientLocal::Settings> >={__compressed_pair<WebCore::InspectorFrontendClientLocal::Settings *, std::__1::default_delete<WebCore::InspectorFrontendClientLocal::Settings> >=^{Settings}}}Bi{Vector<WTF::String, 0, WTF::CrashOnOverflow>=^{String}II}{unique_ptr<WebCore::InspectorBackendDispatchTask, std::__1::default_delete<WebCore::InspectorBackendDispatchTask> >={__compressed_pair<WebCore::InspectorBackendDispatchTask *, std::__1::default_delete<WebCore::InspectorBackendDispatchTask> >=^{InspectorBackendDispatchTask}}}})a ;
 - (void) startProfilingJavaScript;
 - (void) stopProfilingJavaScript;
 - (void) detach;


@end
