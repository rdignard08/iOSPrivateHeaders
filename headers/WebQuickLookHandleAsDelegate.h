
@protocol NSURLConnectionDelegate;
@interface WebQuickLookHandleAsDelegate : NSObject <NSURLConnectionDelegate> {

    m_ptr* m_connectionDelegate;
}

 - (id) .cxx_construct;
 - (void) .cxx_destruct;
 - (void) connection:(id)a didFailWithError:(id)b ;
 - (void) connection:(id)a didReceiveData:(id)b lengthReceived:(long long)c ;
 - (void) connectionDidFinishLoading:(id)a ;
 - (void) connection:(id)a didReceiveDataArray:(id)b ;
 - (id) initWithConnectionDelegate:(^{SynchronousResourceHandleCFURLConnectionDelegate=^^?{atomic<int>=Ai}^{ResourceHandle}{RetainPtr<const __CFString *>=^v}})a ;
 - (void) clearHandle;


@end
