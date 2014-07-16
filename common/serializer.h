#ifndef _serializer_h_
#define _serializer_h_

#include <boost/serialization/binary_object.hpp>
#include <boost/archive/binary_iarchive.hpp>
#include <boost/archive/binary_oarchive.hpp>
#include <boost/iostreams/stream_buffer.hpp>
#include <boost/iostreams/stream.hpp>
#include <boost/iostreams/device/back_inserter.hpp>

namespace boring
{

template< class Object >
void deserialize( const char* data, const size_t size, Object& object )
{
    boost::iostreams::basic_array_source< char > source( data, size );
    boost::iostreams::stream< boost::iostreams::basic_array_source < char > > inputStream( source );
    boost::archive::binary_iarchive ia( inputStream );
    ia & BOOST_SERIALIZATION_NVP( object );
}

template< class Object >
std::string serialize( const Object& object )
{
    std::stringstream is;
    boost::archive::binary_oarchive ia( is );
    ia & BOOST_SERIALIZATION_NVP( object );
    return is.str();
}

}

#endif // _serializer_h_
