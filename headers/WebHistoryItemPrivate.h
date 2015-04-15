
@interface WebHistoryItemPrivate : NSObject {

    {RefPtr<WebCore::HistoryItem>="m_ptr"^{HistoryItem}} _historyItem;
    d _lastVisitedTime;
}

 - (id) .cxx_construct;
 - (void) .cxx_destruct;


@end
