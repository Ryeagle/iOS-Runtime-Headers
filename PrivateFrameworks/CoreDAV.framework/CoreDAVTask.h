/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class <CoreDAVTaskManager>, NSHTTPURLResponse, NSURLRequest, NSError, NSDate, NSDictionary, CoreDAVRequestLogger, <CoreDAVAccountInfoProvider>, <CoreDAVResponseBodyParser>, <CoreDAVTaskDelegate>, NSURLConnection, NSURL;

@interface CoreDAVTask : NSObject  {
    <CoreDAVTaskManager> *_taskManager;
    <CoreDAVAccountInfoProvider> *_accountInfoProvider;
    int _numDownloadedElements;
    int _depth;
    NSHTTPURLResponse *_response;
    NSURLConnection *_connection;
    NSURLRequest *_request;
    double _timeoutInterval;
    int _responseStatusCode;
    NSDate *_dateConnectionWentOut;
    BOOL _didSendRequest;
    BOOL _didFailWithError;
    BOOL _didCancel;
    BOOL _didReceiveResponse;
    BOOL _didReceiveData;
    BOOL _didFinishLoading;
    BOOL _finished;
    void *_context;
    BOOL _receivedBadPasswordResponse;
    NSError *_passwordNotificationError;
    <CoreDAVResponseBodyParser> *_responseBodyParser;
    CoreDAVRequestLogger *_logger;
    NSURL *_url;
    <CoreDAVTaskDelegate> *_delegate;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _requestProgressBlock;


  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _responseProgressBlock;


  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _completionBlock;

    NSError *_error;
    unsigned int _totalBytesReceived;
}

@property(retain,readonly) NSDictionary * responseHeaders;
@property unsigned int totalBytesReceived;
@property(retain) NSError * error;
@property(copy) id completionBlock;
@property(copy) id responseProgressBlock;
@property(copy) id requestProgressBlock;
@property int responseStatusCode;
@property(retain) <CoreDAVResponseBodyParser> * responseBodyParser;
@property double timeoutInterval;
@property int depth;
@property(retain,readonly) NSURL * url;
@property void* context;
@property <CoreDAVTaskDelegate> * delegate;
@property <CoreDAVAccountInfoProvider> * accountInfoProvider;
@property <CoreDAVTaskManager> * taskManager;

+ (unsigned int)uniqueQueryID;

- (void)setContext:(void*)arg1;
- (id)initWithURL:(id)arg1;
- (void)setCompletionBlock:(id)arg1;
- (void)reset;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (id)url;
- (void)loadRequest:(id)arg1;
- (void*)context;
- (void)dealloc;
- (id)description;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (id)responseHeaders;
- (BOOL)connectionShouldUseCredentialStorage:(id)arg1;
- (void)connection:(id)arg1 didSendBodyData:(int)arg2 totalBytesWritten:(int)arg3 totalBytesExpectedToWrite:(int)arg4;
- (id)connection:(id)arg1 needNewBodyStream:(id)arg2;
- (BOOL)connection:(id)arg1 canAuthenticateAgainstProtectionSpace:(id)arg2;
- (id)connection:(id)arg1 willSendRequest:(id)arg2 redirectResponse:(id)arg3;
- (void)connection:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2;
- (id)accountInfoProvider;
- (void)setDepth:(int)arg1;
- (id)additionalHeaderValues;
- (int)depth;
- (int)responseStatusCode;
- (id)requestProgressBlock;
- (BOOL)_includeGeneralHeaders;
- (id)requestBodyStream;
- (BOOL)validate:(id*)arg1;
- (void)connection:(id)arg1 willSendRequestForAuthenticationChallenge:(id)arg2;
- (unsigned int)totalBytesReceived;
- (void)setTotalBytesReceived:(unsigned int)arg1;
- (id)responseProgressBlock;
- (void)setResponseProgressBlock:(id)arg1;
- (void)setRequestProgressBlock:(id)arg1;
- (void)setResponseStatusCode:(int)arg1;
- (void)setResponseBodyParser:(id)arg1;
- (void)performCoreDAVTask;
- (void)finishCoreDAVTaskWithError:(id)arg1;
- (void)setAccountInfoProvider:(id)arg1;
- (id)responseBodyParser;
- (id)copyDefaultParserForContentType:(id)arg1;
- (id)completionBlock;
- (id)error;
- (void)setTimeoutInterval:(double)arg1;
- (double)timeoutInterval;
- (void)setError:(id)arg1;
- (void)startModal;
- (void)tearDownResources;
- (id)_createBodyData;
- (void)_failImmediately;
- (id)_applyAuthenticationChain:(struct __CFArray { }*)arg1 toRequest:(id)arg2;
- (void)_handleBadPasswordResponse;
- (int)numDownloadedElements;
- (id)httpMethod;
- (void)reportStatusWithError:(id)arg1;
- (id)requestBody;
- (id)taskManager;
- (void)setTaskManager:(id)arg1;

@end