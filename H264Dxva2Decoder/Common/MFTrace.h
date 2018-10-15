//----------------------------------------------------------------------------------------------
// MFTrace.h
//----------------------------------------------------------------------------------------------
#ifndef MFTRACE_H
#define MFTRACE_H

#if (_DEBUG && MF_USE_LOGGING)

inline LPCWSTR MFErrorString(HRESULT hr){

	switch(hr){

		// General MediaFoudation
		RETURN_STRING(MF_E_PLATFORM_NOT_INITIALIZED);
		RETURN_STRING(MF_E_BUFFERTOOSMALL);
		RETURN_STRING(MF_E_INVALIDREQUEST);
		RETURN_STRING(MF_E_INVALIDSTREAMNUMBER);
		RETURN_STRING(MF_E_INVALIDMEDIATYPE);
		RETURN_STRING(MF_E_NOTACCEPTING);
		RETURN_STRING(MF_E_NOT_INITIALIZED);
		RETURN_STRING(MF_E_UNSUPPORTED_REPRESENTATION);
		RETURN_STRING(MF_E_NO_MORE_TYPES);
		RETURN_STRING(MF_E_UNSUPPORTED_SERVICE);
		RETURN_STRING(MF_E_UNEXPECTED);
		RETURN_STRING(MF_E_INVALIDNAME);
		RETURN_STRING(MF_E_INVALIDTYPE);
		RETURN_STRING(MF_E_INVALID_FILE_FORMAT);
		RETURN_STRING(MF_E_INVALIDINDEX);
		RETURN_STRING(MF_E_INVALID_TIMESTAMP);
		RETURN_STRING(MF_E_UNSUPPORTED_SCHEME);
		RETURN_STRING(MF_E_UNSUPPORTED_BYTESTREAM_TYPE);
		RETURN_STRING(MF_E_UNSUPPORTED_TIME_FORMAT);
		RETURN_STRING(MF_E_NO_SAMPLE_TIMESTAMP);
		RETURN_STRING(MF_E_NO_SAMPLE_DURATION);
		RETURN_STRING(MF_E_INVALID_STREAM_DATA);
		RETURN_STRING(MF_E_RT_UNAVAILABLE);
		RETURN_STRING(MF_E_UNSUPPORTED_RATE);
		RETURN_STRING(MF_E_THINNING_UNSUPPORTED);
		RETURN_STRING(MF_E_REVERSE_UNSUPPORTED);
		RETURN_STRING(MF_E_UNSUPPORTED_RATE_TRANSITION);
		RETURN_STRING(MF_E_RATE_CHANGE_PREEMPTED);
		RETURN_STRING(MF_E_NOT_FOUND);
		RETURN_STRING(MF_E_NOT_AVAILABLE);
		RETURN_STRING(MF_E_NO_CLOCK);
		RETURN_STRING(MF_S_MULTIPLE_BEGIN);
		RETURN_STRING(MF_E_MULTIPLE_BEGIN);
		RETURN_STRING(MF_E_MULTIPLE_SUBSCRIBERS);
		RETURN_STRING(MF_E_TIMER_ORPHANED);
		RETURN_STRING(MF_E_STATE_TRANSITION_PENDING);
		RETURN_STRING(MF_E_UNSUPPORTED_STATE_TRANSITION);
		RETURN_STRING(MF_E_UNRECOVERABLE_ERROR_OCCURRED);
		RETURN_STRING(MF_E_SAMPLE_HAS_TOO_MANY_BUFFERS);
		RETURN_STRING(MF_E_SAMPLE_NOT_WRITABLE);
		RETURN_STRING(MF_E_INVALID_KEY);
		RETURN_STRING(MF_E_BAD_STARTUP_VERSION);
		RETURN_STRING(MF_E_UNSUPPORTED_CAPTION);
		RETURN_STRING(MF_E_INVALID_POSITION);
		RETURN_STRING(MF_E_ATTRIBUTENOTFOUND);
		RETURN_STRING(MF_E_PROPERTY_TYPE_NOT_ALLOWED);
		RETURN_STRING(MF_E_PROPERTY_TYPE_NOT_SUPPORTED);
		RETURN_STRING(MF_E_PROPERTY_EMPTY);
		RETURN_STRING(MF_E_PROPERTY_NOT_EMPTY);
		RETURN_STRING(MF_E_PROPERTY_VECTOR_NOT_ALLOWED);
		RETURN_STRING(MF_E_PROPERTY_VECTOR_REQUIRED);
		RETURN_STRING(MF_E_OPERATION_CANCELLED);
		RETURN_STRING(MF_E_BYTESTREAM_NOT_SEEKABLE);
		RETURN_STRING(MF_E_DISABLED_IN_SAFEMODE);
		RETURN_STRING(MF_E_CANNOT_PARSE_BYTESTREAM);
		RETURN_STRING(MF_E_SOURCERESOLVER_MUTUALLY_EXCLUSIVE_FLAGS);
		RETURN_STRING(MF_E_MEDIAPROC_WRONGSTATE);
		RETURN_STRING(MF_E_RT_THROUGHPUT_NOT_AVAILABLE);
		RETURN_STRING(MF_E_RT_TOO_MANY_CLASSES);
		RETURN_STRING(MF_E_RT_WOULDBLOCK);
		RETURN_STRING(MF_E_NO_BITPUMP);
		RETURN_STRING(MF_E_RT_OUTOFMEMORY);
		RETURN_STRING(MF_E_RT_WORKQUEUE_CLASS_NOT_SPECIFIED);
		RETURN_STRING(MF_E_INSUFFICIENT_BUFFER);
		RETURN_STRING(MF_E_CANNOT_CREATE_SINK);
		RETURN_STRING(MF_E_BYTESTREAM_UNKNOWN_LENGTH);
		RETURN_STRING(MF_E_SESSION_PAUSEWHILESTOPPED);
		RETURN_STRING(MF_S_ACTIVATE_REPLACED);
		RETURN_STRING(MF_E_FORMAT_CHANGE_NOT_SUPPORTED);
		RETURN_STRING(MF_E_INVALID_WORKQUEUE);
		RETURN_STRING(MF_E_DRM_UNSUPPORTED);
		RETURN_STRING(MF_E_UNAUTHORIZED);
		RETURN_STRING(MF_E_OUT_OF_RANGE);
		RETURN_STRING(MF_E_INVALID_CODEC_MERIT);
		RETURN_STRING(MF_E_HW_MFT_FAILED_START_STREAMING);
		// Specific Transform
		RETURN_STRING(MF_E_TRANSFORM_TYPE_NOT_SET);
		RETURN_STRING(MF_E_TRANSFORM_STREAM_CHANGE);
		RETURN_STRING(MF_E_TRANSFORM_INPUT_REMAINING);
		RETURN_STRING(MF_E_TRANSFORM_PROFILE_MISSING);
		RETURN_STRING(MF_E_TRANSFORM_PROFILE_INVALID_OR_CORRUPT);
		RETURN_STRING(MF_E_TRANSFORM_PROFILE_TRUNCATED);
		RETURN_STRING(MF_E_TRANSFORM_PROPERTY_PID_NOT_RECOGNIZED);
		RETURN_STRING(MF_E_TRANSFORM_PROPERTY_VARIANT_TYPE_WRONG);
		RETURN_STRING(MF_E_TRANSFORM_PROPERTY_NOT_WRITEABLE);
		RETURN_STRING(MF_E_TRANSFORM_PROPERTY_ARRAY_VALUE_WRONG_NUM_DIM);
		RETURN_STRING(MF_E_TRANSFORM_PROPERTY_VALUE_OUT_OF_RANGE);
		RETURN_STRING(MF_E_TRANSFORM_PROPERTY_VALUE_INCOMPATIBLE);
		RETURN_STRING(MF_E_TRANSFORM_NOT_POSSIBLE_FOR_CURRENT_OUTPUT_MEDIATYPE);
		RETURN_STRING(MF_E_TRANSFORM_NOT_POSSIBLE_FOR_CURRENT_INPUT_MEDIATYPE);
		RETURN_STRING(MF_E_TRANSFORM_NOT_POSSIBLE_FOR_CURRENT_MEDIATYPE_COMBINATION);
		RETURN_STRING(MF_E_TRANSFORM_CONFLICTS_WITH_OTHER_CURRENTLY_ENABLED_FEATURES);
		RETURN_STRING(MF_E_TRANSFORM_NEED_MORE_INPUT);
		RETURN_STRING(MF_E_TRANSFORM_NOT_POSSIBLE_FOR_CURRENT_SPKR_CONFIG);
		RETURN_STRING(MF_E_TRANSFORM_CANNOT_CHANGE_MEDIATYPE_WHILE_PROCESSING);
		RETURN_STRING(MF_S_TRANSFORM_DO_NOT_PROPAGATE_EVENT);
		RETURN_STRING(MF_E_UNSUPPORTED_D3D_TYPE);
		RETURN_STRING(MF_E_TRANSFORM_ASYNC_LOCKED);
		RETURN_STRING(MF_E_TRANSFORM_CANNOT_INITIALIZE_ACM_DRIVER);
		// Specific Topology
		RETURN_STRING(MF_E_TOPO_INVALID_OPTIONAL_NODE);
		RETURN_STRING(MF_E_TOPO_CANNOT_FIND_DECRYPTOR);
		RETURN_STRING(MF_E_TOPO_CODEC_NOT_FOUND);
		RETURN_STRING(MF_E_TOPO_CANNOT_CONNECT);
		RETURN_STRING(MF_E_TOPO_UNSUPPORTED);
		RETURN_STRING(MF_E_TOPO_INVALID_TIME_ATTRIBUTES);
		RETURN_STRING(MF_E_TOPO_LOOPS_IN_TOPOLOGY);
		RETURN_STRING(MF_E_TOPO_MISSING_PRESENTATION_DESCRIPTOR);
		RETURN_STRING(MF_E_TOPO_MISSING_STREAM_DESCRIPTOR);
		RETURN_STRING(MF_E_TOPO_STREAM_DESCRIPTOR_NOT_SELECTED);
		RETURN_STRING(MF_E_TOPO_MISSING_SOURCE);
		RETURN_STRING(MF_E_TOPO_SINK_ACTIVATES_UNSUPPORTED);
		// Specific Media Source
		RETURN_STRING(MF_E_NO_EVENTS_AVAILABLE);
		RETURN_STRING(MF_E_INVALID_STATE_TRANSITION);
		RETURN_STRING(MF_E_END_OF_STREAM);
		RETURN_STRING(MF_E_SHUTDOWN);
		RETURN_STRING(MF_E_MP3_NOTFOUND);
		RETURN_STRING(MF_E_MP3_OUTOFDATA);
		RETURN_STRING(MF_E_MP3_NOTMP3);
		RETURN_STRING(MF_E_MP3_NOTSUPPORTED);
		RETURN_STRING(MF_E_NO_DURATION);
		RETURN_STRING(MF_E_INVALID_FORMAT);
		RETURN_STRING(MF_E_PROPERTY_NOT_FOUND);
		RETURN_STRING(MF_E_PROPERTY_READ_ONLY);
		RETURN_STRING(MF_E_PROPERTY_NOT_ALLOWED);
		RETURN_STRING(MF_E_MEDIA_SOURCE_NOT_STARTED);
		RETURN_STRING(MF_E_UNSUPPORTED_FORMAT);
		RETURN_STRING(MF_E_MP3_BAD_CRC);
		RETURN_STRING(MF_E_NOT_PROTECTED);
		RETURN_STRING(MF_E_MEDIA_SOURCE_WRONGSTATE);
		RETURN_STRING(MF_E_MEDIA_SOURCE_NO_STREAMS_SELECTED);
		RETURN_STRING(MF_E_CANNOT_FIND_KEYFRAME_SAMPLE);
		// Specific Media Sink
		RETURN_STRING(MF_E_STREAMSINK_REMOVED);
		RETURN_STRING(MF_E_STREAMSINKS_OUT_OF_SYNC);
		RETURN_STRING(MF_E_STREAMSINKS_FIXED);
		RETURN_STRING(MF_E_STREAMSINK_EXISTS);
		RETURN_STRING(MF_E_SAMPLEALLOCATOR_CANCELED);
		RETURN_STRING(MF_E_SAMPLEALLOCATOR_EMPTY);
		RETURN_STRING(MF_E_SINK_ALREADYSTOPPED);
		RETURN_STRING(MF_E_ASF_FILESINK_BITRATE_UNKNOWN);
		RETURN_STRING(MF_E_SINK_NO_STREAMS);
		RETURN_STRING(MF_S_SINK_NOT_FINALIZED);
		RETURN_STRING(MF_E_METADATA_TOO_LONG);
		RETURN_STRING(MF_E_SINK_NO_SAMPLES_PROCESSED);
		// Specific Renderer
		RETURN_STRING(MF_E_VIDEO_REN_NO_PROCAMP_HW);
		RETURN_STRING(MF_E_VIDEO_REN_NO_DEINTERLACE_HW);
		RETURN_STRING(MF_E_VIDEO_REN_COPYPROT_FAILED);
		RETURN_STRING(MF_E_VIDEO_REN_SURFACE_NOT_SHARED);
		RETURN_STRING(MF_E_VIDEO_DEVICE_LOCKED);
		RETURN_STRING(MF_E_NEW_VIDEO_DEVICE);
		RETURN_STRING(MF_E_NO_VIDEO_SAMPLE_AVAILABLE);
		RETURN_STRING(MF_E_NO_AUDIO_PLAYBACK_DEVICE);
		RETURN_STRING(MF_E_AUDIO_PLAYBACK_DEVICE_IN_USE);
		RETURN_STRING(MF_E_AUDIO_PLAYBACK_DEVICE_INVALIDATED);
		RETURN_STRING(MF_E_AUDIO_SERVICE_NOT_RUNNING);
		// Specific Clock
		RETURN_STRING(MF_E_CLOCK_INVALID_CONTINUITY_KEY);
		RETURN_STRING(MF_E_CLOCK_NO_TIME_SOURCE);
		RETURN_STRING(MF_E_CLOCK_STATE_ALREADY_SET);
		RETURN_STRING(MF_E_CLOCK_NOT_SIMPLE);
		RETURN_STRING(MF_S_CLOCK_STOPPED);
		// Specific Quality Management
		RETURN_STRING(MF_E_NO_MORE_DROP_MODES);
		RETURN_STRING(MF_E_NO_MORE_QUALITY_LEVELS);
		RETURN_STRING(MF_E_DROPTIME_NOT_SUPPORTED);
		RETURN_STRING(MF_E_QUALITYKNOB_WAIT_LONGER);
		RETURN_STRING(MF_E_QM_INVALIDSTATE);
		// Specific Dxva2
		RETURN_STRING(DXVA2_E_NOT_INITIALIZED);
		RETURN_STRING(DXVA2_E_NEW_VIDEO_DEVICE);
		RETURN_STRING(DXVA2_E_VIDEO_DEVICE_LOCKED);
		RETURN_STRING(DXVA2_E_NOT_AVAILABLE);
		// Specific Transcode
		RETURN_STRING(MF_E_TRANSCODE_NO_CONTAINERTYPE);
		RETURN_STRING(MF_E_TRANSCODE_PROFILE_NO_MATCHING_STREAMS);
		RETURN_STRING(MF_E_TRANSCODE_NO_MATCHING_ENCODER);
		// Specific ASF Parsing
		RETURN_STRING(MF_S_ASF_PARSEINPROGRESS);
		RETURN_STRING(MF_E_ASF_PARSINGINCOMPLETE);
		RETURN_STRING(MF_E_ASF_MISSINGDATA);
		RETURN_STRING(MF_E_ASF_INVALIDDATA);
		RETURN_STRING(MF_E_ASF_OPAQUEPACKET);
		RETURN_STRING(MF_E_ASF_NOINDEX);
		RETURN_STRING(MF_E_ASF_OUTOFRANGE);
		RETURN_STRING(MF_E_ASF_INDEXNOTLOADED);
		RETURN_STRING(MF_E_ASF_TOO_MANY_PAYLOADS);
		RETURN_STRING(MF_E_ASF_UNSUPPORTED_STREAM_TYPE);
		RETURN_STRING(MF_E_ASF_DROPPED_PACKET);
		// Specific Device Proxy
		RETURN_STRING(MF_E_ALLOCATOR_NOT_INITIALIZED);
		RETURN_STRING(MF_E_ALLOCATOR_NOT_COMMITED);
		RETURN_STRING(MF_E_ALLOCATOR_ALREADY_COMMITED);
		RETURN_STRING(MF_E_STREAM_ERROR);
		RETURN_STRING(MF_E_INVALID_STREAM_STATE);
		RETURN_STRING(MF_E_HW_STREAM_NOT_CONNECTED);
		// Specific Network
		RETURN_STRING(MF_E_NETWORK_RESOURCE_FAILURE);
		RETURN_STRING(MF_E_NET_WRITE);
		RETURN_STRING(MF_E_NET_READ);
		RETURN_STRING(MF_E_NET_REQUIRE_NETWORK);
		RETURN_STRING(MF_E_NET_REQUIRE_ASYNC);
		RETURN_STRING(MF_E_NET_BWLEVEL_NOT_SUPPORTED);
		RETURN_STRING(MF_E_NET_STREAMGROUPS_NOT_SUPPORTED);
		RETURN_STRING(MF_E_NET_MANUALSS_NOT_SUPPORTED);
		RETURN_STRING(MF_E_NET_INVALID_PRESENTATION_DESCRIPTOR);
		RETURN_STRING(MF_E_NET_CACHESTREAM_NOT_FOUND);
		RETURN_STRING(MF_I_MANUAL_PROXY);
		RETURN_STRING(MF_E_NET_REQUIRE_INPUT);
		RETURN_STRING(MF_E_NET_REDIRECT);
		RETURN_STRING(MF_E_NET_REDIRECT_TO_PROXY);
		RETURN_STRING(MF_E_NET_TOO_MANY_REDIRECTS);
		RETURN_STRING(MF_E_NET_TIMEOUT);
		RETURN_STRING(MF_E_NET_CLIENT_CLOSE);
		RETURN_STRING(MF_E_NET_BAD_CONTROL_DATA);
		RETURN_STRING(MF_E_NET_INCOMPATIBLE_SERVER);
		RETURN_STRING(MF_E_NET_UNSAFE_URL);
		RETURN_STRING(MF_E_NET_CACHE_NO_DATA);
		RETURN_STRING(MF_E_NET_EOL);
		RETURN_STRING(MF_E_NET_BAD_REQUEST);
		RETURN_STRING(MF_E_NET_INTERNAL_SERVER_ERROR);
		RETURN_STRING(MF_E_NET_SESSION_NOT_FOUND);
		RETURN_STRING(MF_E_NET_NOCONNECTION);
		RETURN_STRING(MF_E_NET_CONNECTION_FAILURE);
		RETURN_STRING(MF_E_NET_INCOMPATIBLE_PUSHSERVER);
		RETURN_STRING(MF_E_NET_SERVER_ACCESSDENIED);
		RETURN_STRING(MF_E_NET_PROXY_ACCESSDENIED);
		RETURN_STRING(MF_E_NET_CANNOTCONNECT);
		RETURN_STRING(MF_E_NET_INVALID_PUSH_TEMPLATE);
		RETURN_STRING(MF_E_NET_INVALID_PUSH_PUBLISHING_POINT);
		RETURN_STRING(MF_E_NET_BUSY);
		RETURN_STRING(MF_E_NET_RESOURCE_GONE);
		RETURN_STRING(MF_E_NET_ERROR_FROM_PROXY);
		RETURN_STRING(MF_E_NET_PROXY_TIMEOUT);
		RETURN_STRING(MF_E_NET_SERVER_UNAVAILABLE);
		RETURN_STRING(MF_E_NET_TOO_MUCH_DATA);
		RETURN_STRING(MF_E_NET_SESSION_INVALID);
		RETURN_STRING(MF_E_OFFLINE_MODE);
		RETURN_STRING(MF_E_NET_UDP_BLOCKED);
		RETURN_STRING(MF_E_NET_UNSUPPORTED_CONFIGURATION);
		RETURN_STRING(MF_E_NET_PROTOCOL_DISABLED);
		// Specific WMContainer
		RETURN_STRING(MF_E_ALREADY_INITIALIZED);
		RETURN_STRING(MF_E_BANDWIDTH_OVERRUN);
		RETURN_STRING(MF_E_LATE_SAMPLE);
		RETURN_STRING(MF_E_FLUSH_NEEDED);
		RETURN_STRING(MF_E_INVALID_PROFILE);
		RETURN_STRING(MF_E_INDEX_NOT_COMMITTED);
		RETURN_STRING(MF_E_NO_INDEX);
		RETURN_STRING(MF_E_CANNOT_INDEX_IN_PLACE);
		RETURN_STRING(MF_E_MISSING_ASF_LEAKYBUCKET);
		RETURN_STRING(MF_E_INVALID_ASF_STREAMID);
		// Specific Timeline
		RETURN_STRING(MF_E_SEQUENCER_UNKNOWN_SEGMENT_ID);
		RETURN_STRING(MF_S_SEQUENCER_CONTEXT_CANCELED);
		RETURN_STRING(MF_E_NO_SOURCE_IN_CACHE);
		RETURN_STRING(MF_S_SEQUENCER_SEGMENT_AT_END_OF_STREAM);
		// Specific Protection
		RETURN_STRING(MF_E_LICENSE_INCORRECT_RIGHTS);
		RETURN_STRING(MF_E_LICENSE_OUTOFDATE);
		RETURN_STRING(MF_E_LICENSE_REQUIRED);
		RETURN_STRING(MF_E_DRM_HARDWARE_INCONSISTENT);
		RETURN_STRING(MF_E_NO_CONTENT_PROTECTION_MANAGER);
		RETURN_STRING(MF_E_LICENSE_RESTORE_NO_RIGHTS);
		RETURN_STRING(MF_E_BACKUP_RESTRICTED_LICENSE);
		RETURN_STRING(MF_E_LICENSE_RESTORE_NEEDS_INDIVIDUALIZATION);
		RETURN_STRING(MF_S_PROTECTION_NOT_REQUIRED);
		RETURN_STRING(MF_E_COMPONENT_REVOKED);
		RETURN_STRING(MF_E_TRUST_DISABLED);
		RETURN_STRING(MF_E_WMDRMOTA_NO_ACTION);
		RETURN_STRING(MF_E_WMDRMOTA_ACTION_ALREADY_SET);
		RETURN_STRING(MF_E_WMDRMOTA_DRM_HEADER_NOT_AVAILABLE);
		RETURN_STRING(MF_E_WMDRMOTA_DRM_ENCRYPTION_SCHEME_NOT_SUPPORTED);
		RETURN_STRING(MF_E_WMDRMOTA_ACTION_MISMATCH);
		RETURN_STRING(MF_E_WMDRMOTA_INVALID_POLICY);
		RETURN_STRING(MF_E_POLICY_UNSUPPORTED);
		RETURN_STRING(MF_E_OPL_NOT_SUPPORTED);
		RETURN_STRING(MF_E_TOPOLOGY_VERIFICATION_FAILED);
		RETURN_STRING(MF_E_SIGNATURE_VERIFICATION_FAILED);
		RETURN_STRING(MF_E_DEBUGGING_NOT_ALLOWED);
		RETURN_STRING(MF_E_CODE_EXPIRED);
		RETURN_STRING(MF_E_GRL_VERSION_TOO_LOW);
		RETURN_STRING(MF_E_GRL_RENEWAL_NOT_FOUND);
		RETURN_STRING(MF_E_GRL_EXTENSIBLE_ENTRY_NOT_FOUND);
		RETURN_STRING(MF_E_KERNEL_UNTRUSTED);
		RETURN_STRING(MF_E_PEAUTH_UNTRUSTED);
		RETURN_STRING(MF_E_NON_PE_PROCESS);
		RETURN_STRING(MF_E_REBOOT_REQUIRED);
		RETURN_STRING(MF_S_WAIT_FOR_POLICY_SET);
		RETURN_STRING(MF_S_VIDEO_DISABLED_WITH_UNKNOWN_SOFTWARE_OUTPUT);
		RETURN_STRING(MF_E_GRL_INVALID_FORMAT);
		RETURN_STRING(MF_E_GRL_UNRECOGNIZED_FORMAT);
		RETURN_STRING(MF_E_ALL_PROCESS_RESTART_REQUIRED);
		RETURN_STRING(MF_E_PROCESS_RESTART_REQUIRED);
		RETURN_STRING(MF_E_USERMODE_UNTRUSTED);
		RETURN_STRING(MF_E_PEAUTH_SESSION_NOT_STARTED);
		RETURN_STRING(MF_E_PEAUTH_PUBLICKEY_REVOKED);
		RETURN_STRING(MF_E_GRL_ABSENT);
		RETURN_STRING(MF_S_PE_TRUSTED);
		RETURN_STRING(MF_E_PE_UNTRUSTED);
		RETURN_STRING(MF_E_PEAUTH_NOT_STARTED);
		RETURN_STRING(MF_E_INCOMPATIBLE_SAMPLE_PROTECTION);
		RETURN_STRING(MF_E_PE_SESSIONS_MAXED);
		RETURN_STRING(MF_E_HIGH_SECURITY_LEVEL_CONTENT_NOT_ALLOWED);
		RETURN_STRING(MF_E_TEST_SIGNED_COMPONENTS_NOT_ALLOWED);
		RETURN_STRING(MF_E_ITA_UNSUPPORTED_ACTION);
		RETURN_STRING(MF_E_ITA_ERROR_PARSING_SAP_PARAMETERS);
		RETURN_STRING(MF_E_POLICY_MGR_ACTION_OUTOFBOUNDS);
		RETURN_STRING(MF_E_BAD_OPL_STRUCTURE_FORMAT);
		RETURN_STRING(MF_E_ITA_UNRECOGNIZED_ANALOG_VIDEO_PROTECTION_GUID);
		RETURN_STRING(MF_E_NO_PMP_HOST);
		RETURN_STRING(MF_E_ITA_OPL_DATA_NOT_INITIALIZED);
		RETURN_STRING(MF_E_ITA_UNRECOGNIZED_ANALOG_VIDEO_OUTPUT);
		RETURN_STRING(MF_E_ITA_UNRECOGNIZED_DIGITAL_VIDEO_OUTPUT);
		// Not MediaFoundation but usefull
		RETURN_STRING(S_OK);
		RETURN_STRING(S_FALSE);
		RETURN_STRING(E_FAIL);
		RETURN_STRING(E_POINTER);
		RETURN_STRING(E_UNEXPECTED);
		RETURN_STRING(E_NOTIMPL);
		RETURN_STRING(E_OUTOFMEMORY);
		RETURN_STRING(E_INVALIDARG);
		RETURN_STRING(E_NOINTERFACE);
		RETURN_STRING(E_HANDLE);
		RETURN_STRING(E_ABORT);
		RETURN_STRING(E_ACCESSDENIED);
		RETURN_STRING(E_PENDING);

	default:
	{
		HRESULT hrc = HRESULT_CODE(hr);

		switch(hrc){

			RETURN_STRING(ERROR_FILE_NOT_FOUND);
			RETURN_STRING(ERROR_PATH_NOT_FOUND);
			RETURN_STRING(ERROR_ACCESS_DENIED);
			RETURN_STRING(ERROR_INVALID_HANDLE);
			RETURN_STRING(ERROR_INVALID_ACCESS);
			RETURN_STRING(ERROR_INVALID_DATA);
			RETURN_STRING(ERROR_SYSTEM_DEVICE_NOT_FOUND);

		default:
			return L"Unknown hresult";
		}
	}
	}
}

inline LPCWSTR GetIIDString(REFIID iid){

	IF_EQUAL_RETURN(iid, IID_IUnknown);
	IF_EQUAL_RETURN(iid, IID_IMFAsyncCallback);
	IF_EQUAL_RETURN(iid, IID_IMFMediaEvent);
	IF_EQUAL_RETURN(iid, IID_IMFMediaBuffer);
	IF_EQUAL_RETURN(iid, IID_IMFSample);
	IF_EQUAL_RETURN(iid, IID_IMFTransform);
	IF_EQUAL_RETURN(iid, IID_IMFMediaType);
	IF_EQUAL_RETURN(iid, IID_IMFAsyncResult);
	IF_EQUAL_RETURN(iid, IID_IMFMediaEventGenerator);
	IF_EQUAL_RETURN(iid, IID_IMFByteStream);
	IF_EQUAL_RETURN(iid, IID_IMFMediaEventQueue);
	IF_EQUAL_RETURN(iid, IID_IMFActivate);
	IF_EQUAL_RETURN(iid, IID_IMFMediaSession);
	IF_EQUAL_RETURN(iid, IID_IMFTopology);
	IF_EQUAL_RETURN(iid, IID_IMFTopologyNode);
	IF_EQUAL_RETURN(iid, IID_IMFGetService);
	IF_EQUAL_RETURN(iid, IID_IMFPresentationDescriptor);
	IF_EQUAL_RETURN(iid, IID_IMFStreamDescriptor);
	IF_EQUAL_RETURN(iid, IID_IMFMediaTypeHandler);
	IF_EQUAL_RETURN(iid, IID_IMFTimer);
	IF_EQUAL_RETURN(iid, IID_IMFShutdown);
	IF_EQUAL_RETURN(iid, IID_IMFTopoLoader);
	IF_EQUAL_RETURN(iid, IID_IMFClock);
	IF_EQUAL_RETURN(iid, IID_IMFPresentationClock);
	IF_EQUAL_RETURN(iid, IID_IMFPresentationTimeSource);
	IF_EQUAL_RETURN(iid, IID_IMFClockStateSink);
	IF_EQUAL_RETURN(iid, IID_IMFSourceResolver);
	IF_EQUAL_RETURN(iid, IID_IMFMediaSource);
	IF_EQUAL_RETURN(iid, IID_IMFMediaStream);
	IF_EQUAL_RETURN(iid, IID_IMFMediaSink);
	IF_EQUAL_RETURN(iid, IID_IMFStreamSink);
	IF_EQUAL_RETURN(iid, IID_IMFRateSupport);
	IF_EQUAL_RETURN(iid, IID_IMFRateControl);
	IF_EQUAL_RETURN(iid, IID_IMFVideoDisplayControl);
	IF_EQUAL_RETURN(iid, IID_IPersist);
	IF_EQUAL_RETURN(iid, IID_IPersistPropertyBag);
	IF_EQUAL_RETURN(iid, IID_IPersistStorage);
	IF_EQUAL_RETURN(iid, IID_IPropertyStore);
	IF_EQUAL_RETURN(iid, IID_IMFMetadata);
	IF_EQUAL_RETURN(iid, IID_IMFMetadataProvider);
	IF_EQUAL_RETURN(iid, IID_IMFSimpleAudioVolume);
	IF_EQUAL_RETURN(iid, IID_IMFAudioStreamVolume);
	IF_EQUAL_RETURN(iid, IID_IMFWorkQueueServices);
	IF_EQUAL_RETURN(iid, IID_IMFSchemeHandler);
	IF_EQUAL_RETURN(iid, IID_IMFByteStreamHandler);
	IF_EQUAL_RETURN(iid, IID_IMFQualityManager);
	IF_EQUAL_RETURN(iid, IID_IMFQualityAdvise);
	IF_EQUAL_RETURN(iid, IID_IMFQualityAdvise2);
	IF_EQUAL_RETURN(iid, IID_IMFQualityAdviseLimits);
	IF_EQUAL_RETURN(iid, IID_IMFRealTimeClient);
	IF_EQUAL_RETURN(iid, IID_IMFSequencerSource);
	IF_EQUAL_RETURN(iid, IID_IMFMediaSourceTopologyProvider);
	IF_EQUAL_RETURN(iid, IID_IMFMediaSourcePresentationProvider);
	IF_EQUAL_RETURN(iid, IID_IMFTopologyNodeAttributeEditor);
	IF_EQUAL_RETURN(iid, IID_IMFByteStreamBuffering);
	IF_EQUAL_RETURN(iid, IID_IMFByteStreamCacheControl);
	IF_EQUAL_RETURN(iid, IID_IMFNetCredential);
	IF_EQUAL_RETURN(iid, IID_IMFNetCredentialManager);
	IF_EQUAL_RETURN(iid, IID_IMFNetCredentialCache);
	IF_EQUAL_RETURN(iid, IID_IMFSSLCertificateManager);
	IF_EQUAL_RETURN(iid, IID_IMFSourceOpenMonitor);
	IF_EQUAL_RETURN(iid, IID_IMFNetProxyLocator);
	IF_EQUAL_RETURN(iid, IID_IMFNetProxyLocatorFactory);
	IF_EQUAL_RETURN(iid, IID_IMFSaveJob);
	IF_EQUAL_RETURN(iid, IID_IMFNetSchemeHandlerConfig);
	IF_EQUAL_RETURN(iid, IID_IMFMediaSinkPreroll);
	IF_EQUAL_RETURN(iid, IID_IMFFinalizableMediaSink);
	IF_EQUAL_RETURN(iid, IID_IMFStreamingSinkConfig);
	IF_EQUAL_RETURN(iid, IID_IMFRemoteProxy);
	IF_EQUAL_RETURN(iid, IID_IMFObjectReferenceStream);
	IF_EQUAL_RETURN(iid, IID_IMFPMPHost);
	IF_EQUAL_RETURN(iid, IID_IMFPMPClient);
	IF_EQUAL_RETURN(iid, IID_IMFPMPServer);
	IF_EQUAL_RETURN(iid, IID_IMFRemoteDesktopPlugin);
	IF_EQUAL_RETURN(iid, IID_IMFSAMIStyle);
	IF_EQUAL_RETURN(iid, IID_IMFTranscodeProfile);
	IF_EQUAL_RETURN(iid, IID_IMFTranscodeSinkInfoProvider);
	IF_EQUAL_RETURN(iid, IID_IMFFieldOfUseMFTUnlock);
	IF_EQUAL_RETURN(iid, IID_IMFLocalMFTRegistration);
	IF_EQUAL_RETURN(iid, IID_IMFTrustedInput);
	IF_EQUAL_RETURN(iid, IID_IMFInputTrustAuthority);
	IF_EQUAL_RETURN(iid, IID_IMFTrustedOutput);
	IF_EQUAL_RETURN(iid, IID_IMFOutputTrustAuthority);
	IF_EQUAL_RETURN(iid, IID_IMFOutputPolicy);
	IF_EQUAL_RETURN(iid, IID_IMFOutputSchema);
	IF_EQUAL_RETURN(iid, IID_IMFSecureChannel);
	IF_EQUAL_RETURN(iid, IID_IMFSampleProtection);
	IF_EQUAL_RETURN(iid, IID_IMFSampleGrabberSinkCallback);
	IF_EQUAL_RETURN(iid, IID_IMFSampleGrabberSinkCallback);
	IF_EQUAL_RETURN(iid, IID_IMFAudioPolicy);
	IF_EQUAL_RETURN(iid, IID_IMFTimecodeTranslate);
	IF_EQUAL_RETURN(iid, IID_IMFVideoSampleAllocator);
	IF_EQUAL_RETURN(iid, IID_IMFVideoSampleAllocatorNotify);
	IF_EQUAL_RETURN(iid, IID_IMFVideoSampleAllocatorCallback);
	IF_EQUAL_RETURN(iid, IID_IMFContentProtectionManager);
	IF_EQUAL_RETURN(iid, IID_IMFContentEnabler);
	IF_EQUAL_RETURN(iid, IID_IMFAttributes);
	IF_EQUAL_RETURN(iid, IID_IMFRemoteAsyncCallback);
	IF_EQUAL_RETURN(iid, IID_IMFPluginControl);
	IF_EQUAL_RETURN(iid, IID_IMFCollection);
	IF_EQUAL_RETURN(iid, IID_IMFVideoMediaType);
	IF_EQUAL_RETURN(iid, IID_IMFAudioMediaType);
	IF_EQUAL_RETURN(iid, IID_IMF2DBuffer);
	IF_EQUAL_RETURN(iid, IID_IDirect3DDeviceManager9);
	IF_EQUAL_RETURN(iid, IID_IMFVideoDeviceID);
	IF_EQUAL_RETURN(iid, IID_IMFTopologyServiceLookupClient);
	IF_EQUAL_RETURN(iid, IID_IMFVideoPositionMapper);
	IF_EQUAL_RETURN(iid, IID_IMFVideoPresenter);
	IF_EQUAL_RETURN(iid, IID_IMFDesiredSample);
	IF_EQUAL_RETURN(iid, IID_IMFVideoMixerControl2);
	IF_EQUAL_RETURN(iid, IID_IMFVideoRenderer);
	IF_EQUAL_RETURN(iid, IID_IEVRFilterConfig);
	IF_EQUAL_RETURN(iid, IID_IEVRFilterConfigEx);
	IF_EQUAL_RETURN(iid, IID_IMFTopologyServiceLookup);
	IF_EQUAL_RETURN(iid, IID_IEVRTrustedVideoPlugin);
	IF_EQUAL_RETURN(iid, IID_IMFVideoMixerControl);
	IF_EQUAL_RETURN(iid, IID_IMFVideoProcessor);
	IF_EQUAL_RETURN(iid, IID_IMediaEventSink);

	VALUE_NOT_FOUND(IID_NotFound);
}

inline LPCWSTR MFTServiceinterfaceString(REFGUID guidService){

	IF_EQUAL_RETURN(guidService, MF_METADATA_PROVIDER_SERVICE);
	IF_EQUAL_RETURN(guidService, MF_MEDIASOURCE_SERVICE);
	IF_EQUAL_RETURN(guidService, MF_PMP_SERVER_CONTEXT);
	IF_EQUAL_RETURN(guidService, MF_QUALITY_SERVICES);
	IF_EQUAL_RETURN(guidService, MF_RATE_CONTROL_SERVICE);
	IF_EQUAL_RETURN(guidService, MF_REMOTE_PROXY);
	IF_EQUAL_RETURN(guidService, MF_SAMI_SERVICE);
	IF_EQUAL_RETURN(guidService, MF_SOURCE_PRESENTATION_PROVIDER_SERVICE);
	IF_EQUAL_RETURN(guidService, MF_TIMECODE_SERVICE);
	IF_EQUAL_RETURN(guidService, MF_TOPONODE_ATTRIBUTE_EDITOR_SERVICE);
	IF_EQUAL_RETURN(guidService, MF_WRAPPED_OBJECT);
	IF_EQUAL_RETURN(guidService, MF_WRAPPED_BUFFER_SERVICE);
	IF_EQUAL_RETURN(guidService, MF_WRAPPED_SAMPLE_SERVICE);
	IF_EQUAL_RETURN(guidService, MF_WORKQUEUE_SERVICES);
	IF_EQUAL_RETURN(guidService, MFNET_SAVEJOB_SERVICE);
	IF_EQUAL_RETURN(guidService, MFNETSOURCE_STATISTICS_SERVICE);
	IF_EQUAL_RETURN(guidService, MR_AUDIO_POLICY_SERVICE);
	IF_EQUAL_RETURN(guidService, MR_BUFFER_SERVICE);
	IF_EQUAL_RETURN(guidService, MR_CAPTURE_POLICY_VOLUME_SERVICE);
	IF_EQUAL_RETURN(guidService, MR_POLICY_VOLUME_SERVICE);
	IF_EQUAL_RETURN(guidService, MR_STREAM_VOLUME_SERVICE);
	IF_EQUAL_RETURN(guidService, MR_VIDEO_ACCELERATION_SERVICE);
	IF_EQUAL_RETURN(guidService, MR_VIDEO_MIXER_SERVICE);
	IF_EQUAL_RETURN(guidService, MR_VIDEO_RENDER_SERVICE);

	VALUE_NOT_FOUND(IID_NotFound);
}

#else
#define MFErrorString(x) L""
#define GetIIDString(x) L""
#define MFTServiceinterfaceString(x) L""
#endif

#endif
