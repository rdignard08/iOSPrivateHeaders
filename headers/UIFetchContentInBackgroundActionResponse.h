
@interface UIFetchContentInBackgroundActionResponse : BSActionResponse {

}
 + (id) responseWithResult:(unsigned long long)a;

 - (id) initWithBackgroundFetchResult:(unsigned long long)a ;
 - (id) keyDescriptionForSetting:(unsigned long long)a ;
 - (id) initWithInfo:(id)a error:(id)b ;
 - (unsigned long long) result;


@end
