
@interface NSXMLParser : NSObject {

    id _reserved0;
    id _delegate;
    id _reserved1;
    id _reserved2;
    id _reserved3;
    ^{_xmlSAXHandler=^?^?^?^?^?^?^?^?^?^?^?^?^?^?^?^?^?^?^?^?^?^?^?^?^?^?^?I^v^?^?^?} _saxHandler;
    ^{_xmlParserCtxt=^{_xmlSAXHandler}^v^{_xmlDoc}ii**ii^{_xmlParserInput}ii^^{_xmlParserInput}^{_xmlNode}ii^^{_xmlNode}i{_xmlParserNodeInfoSeq=QQ^{_xmlParserNodeInfo}}iiiiii{_xmlValidCtxt=^v^?^?^{_xmlNode}ii^^{_xmlNode}I^{_xmlDoc}i^{_xmlValidState}ii^{_xmlValidState}^{_xmlAutomata}^{_xmlAutomataState}}ii**ii^*qqiii***^iii^ii^{_xmlParserInput}iiii^vii^vii^{_xmlDict}^*ii***iii^*^i^^v^{_xmlHashTable}^{_xmlHashTable}iiii^{_xmlNode}i^{_xmlAttr}{_xmlError=ii*i*i***ii^v^v}iQQ^{_xmlParserNodeInfo}ii^{_xmlParserNodeInfo}iQ} _parserContext;
    unsigned long long _parserFlags;
    @"NSError" _error;
    @"NSMutableArray" _namespaces;
    ^{__CFDictionary=} _slowStringMap;
    BOOL _delegateAborted;
    BOOL _haveDetectedEncoding;
    @"NSData" _bomChunk;
    unsigned long long _chunkSize;
    @"NSSet" _allowedEntityURLs;
    @"NSURL" _url;
    unsigned long long _externalEntityResolvingPolicy;
}
@property (atomic, assign, readwrite) NSNumber* delegate;
@property (atomic, assign, readwrite) NSNumber* shouldProcessNamespaces;
@property (atomic, assign, readwrite) NSNumber* shouldReportNamespacePrefixes;
@property (atomic, assign, readwrite) NSNumber* externalEntityResolvingPolicy;
@property (atomic, copy, readwrite) NSSet* allowedExternalEntityURLs;
@property (atomic, copy, readonly) NSError* parserError;
@property (atomic, assign, readwrite) NSNumber* shouldResolveExternalEntities;
 + (void) setCurrentParser:(id)a;
 + (id) currentParser;

 - (id) initWithStream:(id)a;
 - (void) _initializeSAX2Callbacks;
 - (id) initForIncrementalParsing;
 - (unsigned long long) externalEntityResolvingPolicy;
 - (id) allowedExternalEntityURLs;
 - (void) _setExpandedParserError:(id)a;
 - (void) _setParserError:(long long)a;
 - (BOOL) shouldResolveExternalEntities;
 - (BOOL) parseData:(id)a;
 - (BOOL) _handleParseResult:(long long)a;
 - (BOOL) finishIncrementalParse;
 - (BOOL) parseFromStream;
 - (void) setShouldProcessNamespaces:(BOOL)a;
 - (void) setShouldReportNamespacePrefixes:(BOOL)a;
 - (void) setShouldResolveExternalEntities:(BOOL)a;
 - (void) setAllowedExternalEntityURLs:(id)a;
 - (void) setExternalEntityResolvingPolicy:(unsigned long long)a;
 - (^{_xmlParserInput=^{_xmlParserInputBuffer}*****iiiQ^?**ii}) _xmlExternalEntityWithURL:(r*)aidentifier:(r*)bcontext:(^{_xmlParserCtxt=^{_xmlSAXHandler}^v^{_xmlDoc}ii**ii^{_xmlParserInput}ii^^{_xmlParserInput}^{_xmlNode}ii^^{_xmlNode}i{_xmlParserNodeInfoSeq=QQ^{_xmlParserNodeInfo}}iiiiii{_xmlValidCtxt=^v^?^?^{_xmlNode}ii^^{_xmlNode}I^{_xmlDoc}i^{_xmlValidState}ii^{_xmlValidState}^{_xmlAutomata}^{_xmlAutomataState}}ii**ii^*qqiii***^iii^ii^{_xmlParserInput}iiii^vii^vii^{_xmlDict}^*ii***iii^*^i^^v^{_xmlHashTable}^{_xmlHashTable}iiii^{_xmlNode}i^{_xmlAttr}{_xmlError=ii*i*i***ii^v^v}iQQ^{_xmlParserNodeInfo}ii^{_xmlParserNodeInfo}iQ})coriginalLoaderFunction:(^?)d;
 - (BOOL) shouldProcessNamespaces;
 - (BOOL) shouldReportNamespacePrefixes;
 - (void) setShouldContinueAfterFatalError:(BOOL)a;
 - (BOOL) shouldContinueAfterFatalError;
 - (BOOL) parse;
 - (void) abortParsing;
 - (id) parserError;
 - (id) publicID;
 - (id) systemID;
 - (long long) lineNumber;
 - (long long) columnNumber;
 - (void) _pushNamespaces:(id)a;
 - (void) _popNamespaces;
 - (void) dealloc;
 - (void) finalize;
 - (void) setDelegate:(id)a;
 - (id) delegate;
 - (id) initWithData:(id)a;
 - (id) initWithContentsOfURL:(id)a;


@end
