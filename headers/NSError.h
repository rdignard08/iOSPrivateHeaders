
@protocol NSCopying, NSSecureCoding;
@interface NSError : NSObject <NSCopying, NSSecureCoding> {

    ^v _reserved;
    long long _code;
    NSString* _domain;
    NSDictionary* _userInfo;
}
@property (nonatomic, retain, readwrite) NSNumber* extraData;
@property (atomic, copy, readonly) NSString* domain;
@property (atomic, assign, readonly) NSNumber* code;
@property (atomic, copy, readonly) NSDictionary* userInfo;
@property (atomic, copy, readonly) NSString* localizedDescription;
@property (atomic, copy, readonly) NSString* localizedFailureReason;
@property (atomic, copy, readonly) NSString* localizedRecoverySuggestion;
@property (atomic, copy, readonly) NSArray* localizedRecoveryOptions;
@property (atomic, retain, readonly) NSNumber* recoveryAttempter;
@property (atomic, copy, readonly) NSString* helpAnchor;
 + (id) hs_homeSharingErrorWithCode:(long long)auserInfo:(id)b;
 + (id) hs_cloudErrorWithCode:(long long)auserInfo:(id)b;
 + (id) ml_errorWithCode:(unsigned long long)adescription:(id)b;
 + (id) ml_errorWithCode:(unsigned long long)a;
 + (id) MCErrorWithDomain:(id)acode:(long long)bdescriptionArray:(id)cerrorType:(id)d;
 + (id) MCErrorWithDomain:(id)acode:(long long)bdescriptionArray:(id)csuggestion:(id)dUSEnglishSuggestion:(id)eunderlyingError:(id)ferrorType:(id)g;
 + (id) MCErrorWithDomain:(id)acode:(long long)bdescription:(id)cerrorType:(id)d;
 + (id) MCErrorWithDomain:(id)acode:(long long)bdescriptionArray:(id)cunderlyingError:(id)derrorType:(id)e;
 + (id) _webKitErrorWithDomain:(id)acode:(int)bURL:(id)c;
 + (void) _registerWebKitErrors;
 + (id) _webkit_errorWithDomain:(id)acode:(int)bURL:(id)c;
 + (id) _webKitErrorWithCode:(int)afailingURL:(id)b;
 + (void) _webkit_addErrorsWithCodesAndDescriptions:(id)ainDomain:(id)b;
 + (id) bs_timeoutError;
 + (BOOL) supportsSecureCoding;
 + (void) _registerFormatter:(^?)aforErrorKey:(id)bparameters:(r*)c;
 + (void) _registerBuiltInFormatters;
 + (void) _web_addErrorsWithCodesAndDescriptions:(id)ainDomain:(id)b;
 + (id) _web_errorWithDomain:(id)acode:(long long)bfailingURL:(id)c;
 + (id) _web_errorWithDomain:(id)acode:(long long)bURL:(id)c;
 + (id) errorWithDomain:(id)acode:(long long)buserInfo:(id)c;

 - (id) errorBySettingFatalError:(BOOL)a ;
 - (BOOL) isEqual:(id)a compareUserInfo:(BOOL)b ;
 - (BOOL) isFatalError;
 - (id) initWithXPCEncoding:(id)a ;
 - (id) copyXPCEncoding;
 - (id) MCVerboseDescription;
 - (id) MCFindPrimaryError;
 - (id) MCUSEnglishDescription;
 - (id) MCUSEnglishSuggestion;
 - (id) MCCopyAsPrimaryError;
 - (BOOL) MCContainsErrorDomain:(id)a code:(long long)b ;
 - (id) MCErrorType;
 - (id) ac_secureCodingError;
 - (id) extraData;
 - (unsigned long long) HTTPStatusCode;
 - (void) setExtraData:(id)a ;
 - (id) _initWithPluginErrorCode:(int)a contentURL:(id)b pluginPageURL:(id)c pluginName:(id)d MIMEType:(id)e ;
 - (id) _webkit_initWithDomain:(id)a code:(int)b URL:(id)c ;
 - (BOOL) bs_isCancelledError;
 - (BOOL) bs_isTimeoutError;
 - (id) _cocoaErrorString:(id)a ;
 - (id) _cocoaErrorStringWithKind:(id)a variant:(id)b ;
 - (id) _cocoaErrorStringWithKind:(id)a ;
 - (^{__CFString=}) _retainedUserInfoCallBackForKey:(id)a ;
 - (id) localizedRecoveryOptions;
 - (id) recoveryAttempter;
 - (id) helpAnchor;
 - (long long) _collectApplicableUserInfoFormatters:(^^{?})a max:(long long)b ;
 - (id) _formatCocoaErrorString:(id)a parameters:(r*)b applicableFormatters:(^^{?})c count:(long long)d ;
 - (id) _cocoaErrorString:(id)a fromBundle:(id)b tableName:(id)c ;
 - (id) _web_initWithDomain:(id)a code:(long long)b failingURL:(id)c ;
 - (id) _web_failingURL;
 - (BOOL) _web_errorIsInDomain:(id)a ;
 - (id) _web_localizedDescription;
 - (id) replacementObjectForPortCoder:(id)a ;
 - (id) copyWithZone:(^{_NSZone=})a ;
 - (id) description;
 - (void) dealloc;
 - (void) finalize;
 - (id) domain;
 - (long long) code;
 - (id) localizedDescription;
 - (id) localizedFailureReason;
 - (id) localizedRecoverySuggestion;
 - (id) userInfo;
 - (unsigned long long) hash;
 - (BOOL) isEqual:(id)a ;
 - (unsigned long long) _cfTypeID;
 - (id) initWithDomain:(id)a code:(long long)b userInfo:(id)c ;
 - (void) encodeWithCoder:(id)a ;
 - (id) initWithCoder:(id)a ;
 - (id) _web_initWithDomain_nowarn:(id)a code:(long long)b URL:(id)c ;


@end
