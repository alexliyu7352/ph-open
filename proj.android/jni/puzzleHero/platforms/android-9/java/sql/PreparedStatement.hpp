/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.sql.PreparedStatement
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SQL_PREPAREDSTATEMENT_HPP_DECL
#define J2CPP_JAVA_SQL_PREPAREDSTATEMENT_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace util { class Calendar; } } }
namespace j2cpp { namespace java { namespace sql { class ParameterMetaData; } } }
namespace j2cpp { namespace java { namespace sql { class Array; } } }
namespace j2cpp { namespace java { namespace sql { class Statement; } } }
namespace j2cpp { namespace java { namespace sql { class Date; } } }
namespace j2cpp { namespace java { namespace sql { class Timestamp; } } }
namespace j2cpp { namespace java { namespace sql { class Clob; } } }
namespace j2cpp { namespace java { namespace sql { class Ref; } } }
namespace j2cpp { namespace java { namespace sql { class NClob; } } }
namespace j2cpp { namespace java { namespace sql { class Blob; } } }
namespace j2cpp { namespace java { namespace sql { class Time; } } }
namespace j2cpp { namespace java { namespace sql { class SQLXML; } } }
namespace j2cpp { namespace java { namespace sql { class ResultSetMetaData; } } }
namespace j2cpp { namespace java { namespace sql { class Wrapper; } } }
namespace j2cpp { namespace java { namespace sql { class ResultSet; } } }
namespace j2cpp { namespace java { namespace sql { class RowId; } } }
namespace j2cpp { namespace java { namespace net { class URL; } } }
namespace j2cpp { namespace java { namespace io { class InputStream; } } }
namespace j2cpp { namespace java { namespace io { class Reader; } } }
namespace j2cpp { namespace java { namespace math { class BigDecimal; } } }


#include <java/io/InputStream.hpp>
#include <java/io/Reader.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/math/BigDecimal.hpp>
#include <java/net/URL.hpp>
#include <java/sql/Array.hpp>
#include <java/sql/Blob.hpp>
#include <java/sql/Clob.hpp>
#include <java/sql/Date.hpp>
#include <java/sql/NClob.hpp>
#include <java/sql/ParameterMetaData.hpp>
#include <java/sql/Ref.hpp>
#include <java/sql/ResultSet.hpp>
#include <java/sql/ResultSetMetaData.hpp>
#include <java/sql/RowId.hpp>
#include <java/sql/SQLXML.hpp>
#include <java/sql/Statement.hpp>
#include <java/sql/Time.hpp>
#include <java/sql/Timestamp.hpp>
#include <java/sql/Wrapper.hpp>
#include <java/util/Calendar.hpp>


namespace j2cpp {

namespace java { namespace sql {

	class PreparedStatement;
	class PreparedStatement
		: public object<PreparedStatement>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)
		J2CPP_DECLARE_METHOD(4)
		J2CPP_DECLARE_METHOD(5)
		J2CPP_DECLARE_METHOD(6)
		J2CPP_DECLARE_METHOD(7)
		J2CPP_DECLARE_METHOD(8)
		J2CPP_DECLARE_METHOD(9)
		J2CPP_DECLARE_METHOD(10)
		J2CPP_DECLARE_METHOD(11)
		J2CPP_DECLARE_METHOD(12)
		J2CPP_DECLARE_METHOD(13)
		J2CPP_DECLARE_METHOD(14)
		J2CPP_DECLARE_METHOD(15)
		J2CPP_DECLARE_METHOD(16)
		J2CPP_DECLARE_METHOD(17)
		J2CPP_DECLARE_METHOD(18)
		J2CPP_DECLARE_METHOD(19)
		J2CPP_DECLARE_METHOD(20)
		J2CPP_DECLARE_METHOD(21)
		J2CPP_DECLARE_METHOD(22)
		J2CPP_DECLARE_METHOD(23)
		J2CPP_DECLARE_METHOD(24)
		J2CPP_DECLARE_METHOD(25)
		J2CPP_DECLARE_METHOD(26)
		J2CPP_DECLARE_METHOD(27)
		J2CPP_DECLARE_METHOD(28)
		J2CPP_DECLARE_METHOD(29)
		J2CPP_DECLARE_METHOD(30)
		J2CPP_DECLARE_METHOD(31)
		J2CPP_DECLARE_METHOD(32)
		J2CPP_DECLARE_METHOD(33)
		J2CPP_DECLARE_METHOD(34)
		J2CPP_DECLARE_METHOD(35)
		J2CPP_DECLARE_METHOD(36)
		J2CPP_DECLARE_METHOD(37)
		J2CPP_DECLARE_METHOD(38)
		J2CPP_DECLARE_METHOD(39)
		J2CPP_DECLARE_METHOD(40)
		J2CPP_DECLARE_METHOD(41)
		J2CPP_DECLARE_METHOD(42)
		J2CPP_DECLARE_METHOD(43)
		J2CPP_DECLARE_METHOD(44)
		J2CPP_DECLARE_METHOD(45)
		J2CPP_DECLARE_METHOD(46)
		J2CPP_DECLARE_METHOD(47)
		J2CPP_DECLARE_METHOD(48)
		J2CPP_DECLARE_METHOD(49)
		J2CPP_DECLARE_METHOD(50)
		J2CPP_DECLARE_METHOD(51)
		J2CPP_DECLARE_METHOD(52)
		J2CPP_DECLARE_METHOD(53)
		J2CPP_DECLARE_METHOD(54)

		explicit PreparedStatement(jobject jobj)
		: object<PreparedStatement>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<java::sql::Statement>() const;
		operator local_ref<java::sql::Wrapper>() const;


		void addBatch();
		void clearParameters();
		jboolean execute();
		local_ref< java::sql::ResultSet > executeQuery();
		jint executeUpdate();
		local_ref< java::sql::ResultSetMetaData > getMetaData();
		local_ref< java::sql::ParameterMetaData > getParameterMetaData();
		void setArray(jint, local_ref< java::sql::Array >  const&);
		void setAsciiStream(jint, local_ref< java::io::InputStream >  const&, jint);
		void setBigDecimal(jint, local_ref< java::math::BigDecimal >  const&);
		void setBinaryStream(jint, local_ref< java::io::InputStream >  const&, jint);
		void setBlob(jint, local_ref< java::sql::Blob >  const&);
		void setBoolean(jint, jboolean);
		void setByte(jint, jbyte);
		void setBytes(jint, local_ref< array<jbyte,1> >  const&);
		void setCharacterStream(jint, local_ref< java::io::Reader >  const&, jint);
		void setClob(jint, local_ref< java::sql::Clob >  const&);
		void setDate(jint, local_ref< java::sql::Date >  const&);
		void setDate(jint, local_ref< java::sql::Date >  const&, local_ref< java::util::Calendar >  const&);
		void setDouble(jint, jdouble);
		void setFloat(jint, jfloat);
		void setInt(jint, jint);
		void setLong(jint, jlong);
		void setNull(jint, jint);
		void setNull(jint, jint, local_ref< java::lang::String >  const&);
		void setObject(jint, local_ref< java::lang::Object >  const&);
		void setObject(jint, local_ref< java::lang::Object >  const&, jint);
		void setObject(jint, local_ref< java::lang::Object >  const&, jint, jint);
		void setRef(jint, local_ref< java::sql::Ref >  const&);
		void setShort(jint, jshort);
		void setString(jint, local_ref< java::lang::String >  const&);
		void setTime(jint, local_ref< java::sql::Time >  const&);
		void setTime(jint, local_ref< java::sql::Time >  const&, local_ref< java::util::Calendar >  const&);
		void setTimestamp(jint, local_ref< java::sql::Timestamp >  const&);
		void setTimestamp(jint, local_ref< java::sql::Timestamp >  const&, local_ref< java::util::Calendar >  const&);
		void setUnicodeStream(jint, local_ref< java::io::InputStream >  const&, jint);
		void setURL(jint, local_ref< java::net::URL >  const&);
		void setRowId(jint, local_ref< java::sql::RowId >  const&);
		void setNString(jint, local_ref< java::lang::String >  const&);
		void setNCharacterStream(jint, local_ref< java::io::Reader >  const&, jlong);
		void setNClob(jint, local_ref< java::sql::NClob >  const&);
		void setClob(jint, local_ref< java::io::Reader >  const&, jlong);
		void setBlob(jint, local_ref< java::io::InputStream >  const&, jlong);
		void setNClob(jint, local_ref< java::io::Reader >  const&, jlong);
		void setSQLXML(jint, local_ref< java::sql::SQLXML >  const&);
		void setAsciiStream(jint, local_ref< java::io::InputStream >  const&, jlong);
		void setBinaryStream(jint, local_ref< java::io::InputStream >  const&, jlong);
		void setCharacterStream(jint, local_ref< java::io::Reader >  const&, jlong);
		void setAsciiStream(jint, local_ref< java::io::InputStream >  const&);
		void setBinaryStream(jint, local_ref< java::io::InputStream >  const&);
		void setCharacterStream(jint, local_ref< java::io::Reader >  const&);
		void setNCharacterStream(jint, local_ref< java::io::Reader >  const&);
		void setClob(jint, local_ref< java::io::Reader >  const&);
		void setBlob(jint, local_ref< java::io::InputStream >  const&);
		void setNClob(jint, local_ref< java::io::Reader >  const&);
	}; //class PreparedStatement

} //namespace sql
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_SQL_PREPAREDSTATEMENT_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SQL_PREPAREDSTATEMENT_HPP_IMPL
#define J2CPP_JAVA_SQL_PREPAREDSTATEMENT_HPP_IMPL

namespace j2cpp {



java::sql::PreparedStatement::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

java::sql::PreparedStatement::operator local_ref<java::sql::Statement>() const
{
	return local_ref<java::sql::Statement>(get_jobject());
}

java::sql::PreparedStatement::operator local_ref<java::sql::Wrapper>() const
{
	return local_ref<java::sql::Wrapper>(get_jobject());
}

void java::sql::PreparedStatement::addBatch()
{
	return call_method<
		java::sql::PreparedStatement::J2CPP_CLASS_NAME,
		java::sql::PreparedStatement::J2CPP_METHOD_NAME(0),
		java::sql::PreparedStatement::J2CPP_METHOD_SIGNATURE(0), 
		void
	>(get_jobject());
}

void java::sql::PreparedStatement::clearParameters()
{
	return call_method<
		java::sql::PreparedStatement::J2CPP_CLASS_NAME,
		java::sql::PreparedStatement::J2CPP_METHOD_NAME(1),
		java::sql::PreparedStatement::J2CPP_METHOD_SIGNATURE(1), 
		void
	>(get_jobject());
}

jboolean java::sql::PreparedStatement::execute()
{
	return call_method<
		java::sql::PreparedStatement::J2CPP_CLASS_NAME,
		java::sql::PreparedStatement::J2CPP_METHOD_NAME(2),
		java::sql::PreparedStatement::J2CPP_METHOD_SIGNATURE(2), 
		jboolean
	>(get_jobject());
}

local_ref< java::sql::ResultSet > java::sql::PreparedStatement::executeQuery()
{
	return call_method<
		java::sql::PreparedStatement::J2CPP_CLASS_NAME,
		java::sql::PreparedStatement::J2CPP_METHOD_NAME(3),
		java::sql::PreparedStatement::J2CPP_METHOD_SIGNATURE(3), 
		local_ref< java::sql::ResultSet >
	>(get_jobject());
}

jint java::sql::PreparedStatement::executeUpdate()
{
	return call_method<
		java::sql::PreparedStatement::J2CPP_CLASS_NAME,
		java::sql::PreparedStatement::J2CPP_METHOD_NAME(4),
		java::sql::PreparedStatement::J2CPP_METHOD_SIGNATURE(4), 
		jint
	>(get_jobject());
}

local_ref< java::sql::ResultSetMetaData > java::sql::PreparedStatement::getMetaData()
{
	return call_method<
		java::sql::PreparedStatement::J2CPP_CLASS_NAME,
		java::sql::PreparedStatement::J2CPP_METHOD_NAME(5),
		java::sql::PreparedStatement::J2CPP_METHOD_SIGNATURE(5), 
		local_ref< java::sql::ResultSetMetaData >
	>(get_jobject());
}

local_ref< java::sql::ParameterMetaData > java::sql::PreparedStatement::getParameterMetaData()
{
	return call_method<
		java::sql::PreparedStatement::J2CPP_CLASS_NAME,
		java::sql::PreparedStatement::J2CPP_METHOD_NAME(6),
		java::sql::PreparedStatement::J2CPP_METHOD_SIGNATURE(6), 
		local_ref< java::sql::ParameterMetaData >
	>(get_jobject());
}

void java::sql::PreparedStatement::setArray(jint a0, local_ref< java::sql::Array > const &a1)
{
	return call_method<
		java::sql::PreparedStatement::J2CPP_CLASS_NAME,
		java::sql::PreparedStatement::J2CPP_METHOD_NAME(7),
		java::sql::PreparedStatement::J2CPP_METHOD_SIGNATURE(7), 
		void
	>(get_jobject(), a0, a1);
}

void java::sql::PreparedStatement::setAsciiStream(jint a0, local_ref< java::io::InputStream > const &a1, jint a2)
{
	return call_method<
		java::sql::PreparedStatement::J2CPP_CLASS_NAME,
		java::sql::PreparedStatement::J2CPP_METHOD_NAME(8),
		java::sql::PreparedStatement::J2CPP_METHOD_SIGNATURE(8), 
		void
	>(get_jobject(), a0, a1, a2);
}

void java::sql::PreparedStatement::setBigDecimal(jint a0, local_ref< java::math::BigDecimal > const &a1)
{
	return call_method<
		java::sql::PreparedStatement::J2CPP_CLASS_NAME,
		java::sql::PreparedStatement::J2CPP_METHOD_NAME(9),
		java::sql::PreparedStatement::J2CPP_METHOD_SIGNATURE(9), 
		void
	>(get_jobject(), a0, a1);
}

void java::sql::PreparedStatement::setBinaryStream(jint a0, local_ref< java::io::InputStream > const &a1, jint a2)
{
	return call_method<
		java::sql::PreparedStatement::J2CPP_CLASS_NAME,
		java::sql::PreparedStatement::J2CPP_METHOD_NAME(10),
		java::sql::PreparedStatement::J2CPP_METHOD_SIGNATURE(10), 
		void
	>(get_jobject(), a0, a1, a2);
}

void java::sql::PreparedStatement::setBlob(jint a0, local_ref< java::sql::Blob > const &a1)
{
	return call_method<
		java::sql::PreparedStatement::J2CPP_CLASS_NAME,
		java::sql::PreparedStatement::J2CPP_METHOD_NAME(11),
		java::sql::PreparedStatement::J2CPP_METHOD_SIGNATURE(11), 
		void
	>(get_jobject(), a0, a1);
}

void java::sql::PreparedStatement::setBoolean(jint a0, jboolean a1)
{
	return call_method<
		java::sql::PreparedStatement::J2CPP_CLASS_NAME,
		java::sql::PreparedStatement::J2CPP_METHOD_NAME(12),
		java::sql::PreparedStatement::J2CPP_METHOD_SIGNATURE(12), 
		void
	>(get_jobject(), a0, a1);
}

void java::sql::PreparedStatement::setByte(jint a0, jbyte a1)
{
	return call_method<
		java::sql::PreparedStatement::J2CPP_CLASS_NAME,
		java::sql::PreparedStatement::J2CPP_METHOD_NAME(13),
		java::sql::PreparedStatement::J2CPP_METHOD_SIGNATURE(13), 
		void
	>(get_jobject(), a0, a1);
}

void java::sql::PreparedStatement::setBytes(jint a0, local_ref< array<jbyte,1> > const &a1)
{
	return call_method<
		java::sql::PreparedStatement::J2CPP_CLASS_NAME,
		java::sql::PreparedStatement::J2CPP_METHOD_NAME(14),
		java::sql::PreparedStatement::J2CPP_METHOD_SIGNATURE(14), 
		void
	>(get_jobject(), a0, a1);
}

void java::sql::PreparedStatement::setCharacterStream(jint a0, local_ref< java::io::Reader > const &a1, jint a2)
{
	return call_method<
		java::sql::PreparedStatement::J2CPP_CLASS_NAME,
		java::sql::PreparedStatement::J2CPP_METHOD_NAME(15),
		java::sql::PreparedStatement::J2CPP_METHOD_SIGNATURE(15), 
		void
	>(get_jobject(), a0, a1, a2);
}

void java::sql::PreparedStatement::setClob(jint a0, local_ref< java::sql::Clob > const &a1)
{
	return call_method<
		java::sql::PreparedStatement::J2CPP_CLASS_NAME,
		java::sql::PreparedStatement::J2CPP_METHOD_NAME(16),
		java::sql::PreparedStatement::J2CPP_METHOD_SIGNATURE(16), 
		void
	>(get_jobject(), a0, a1);
}

void java::sql::PreparedStatement::setDate(jint a0, local_ref< java::sql::Date > const &a1)
{
	return call_method<
		java::sql::PreparedStatement::J2CPP_CLASS_NAME,
		java::sql::PreparedStatement::J2CPP_METHOD_NAME(17),
		java::sql::PreparedStatement::J2CPP_METHOD_SIGNATURE(17), 
		void
	>(get_jobject(), a0, a1);
}

void java::sql::PreparedStatement::setDate(jint a0, local_ref< java::sql::Date > const &a1, local_ref< java::util::Calendar > const &a2)
{
	return call_method<
		java::sql::PreparedStatement::J2CPP_CLASS_NAME,
		java::sql::PreparedStatement::J2CPP_METHOD_NAME(18),
		java::sql::PreparedStatement::J2CPP_METHOD_SIGNATURE(18), 
		void
	>(get_jobject(), a0, a1, a2);
}

void java::sql::PreparedStatement::setDouble(jint a0, jdouble a1)
{
	return call_method<
		java::sql::PreparedStatement::J2CPP_CLASS_NAME,
		java::sql::PreparedStatement::J2CPP_METHOD_NAME(19),
		java::sql::PreparedStatement::J2CPP_METHOD_SIGNATURE(19), 
		void
	>(get_jobject(), a0, a1);
}

void java::sql::PreparedStatement::setFloat(jint a0, jfloat a1)
{
	return call_method<
		java::sql::PreparedStatement::J2CPP_CLASS_NAME,
		java::sql::PreparedStatement::J2CPP_METHOD_NAME(20),
		java::sql::PreparedStatement::J2CPP_METHOD_SIGNATURE(20), 
		void
	>(get_jobject(), a0, a1);
}

void java::sql::PreparedStatement::setInt(jint a0, jint a1)
{
	return call_method<
		java::sql::PreparedStatement::J2CPP_CLASS_NAME,
		java::sql::PreparedStatement::J2CPP_METHOD_NAME(21),
		java::sql::PreparedStatement::J2CPP_METHOD_SIGNATURE(21), 
		void
	>(get_jobject(), a0, a1);
}

void java::sql::PreparedStatement::setLong(jint a0, jlong a1)
{
	return call_method<
		java::sql::PreparedStatement::J2CPP_CLASS_NAME,
		java::sql::PreparedStatement::J2CPP_METHOD_NAME(22),
		java::sql::PreparedStatement::J2CPP_METHOD_SIGNATURE(22), 
		void
	>(get_jobject(), a0, a1);
}

void java::sql::PreparedStatement::setNull(jint a0, jint a1)
{
	return call_method<
		java::sql::PreparedStatement::J2CPP_CLASS_NAME,
		java::sql::PreparedStatement::J2CPP_METHOD_NAME(23),
		java::sql::PreparedStatement::J2CPP_METHOD_SIGNATURE(23), 
		void
	>(get_jobject(), a0, a1);
}

void java::sql::PreparedStatement::setNull(jint a0, jint a1, local_ref< java::lang::String > const &a2)
{
	return call_method<
		java::sql::PreparedStatement::J2CPP_CLASS_NAME,
		java::sql::PreparedStatement::J2CPP_METHOD_NAME(24),
		java::sql::PreparedStatement::J2CPP_METHOD_SIGNATURE(24), 
		void
	>(get_jobject(), a0, a1, a2);
}

void java::sql::PreparedStatement::setObject(jint a0, local_ref< java::lang::Object > const &a1)
{
	return call_method<
		java::sql::PreparedStatement::J2CPP_CLASS_NAME,
		java::sql::PreparedStatement::J2CPP_METHOD_NAME(25),
		java::sql::PreparedStatement::J2CPP_METHOD_SIGNATURE(25), 
		void
	>(get_jobject(), a0, a1);
}

void java::sql::PreparedStatement::setObject(jint a0, local_ref< java::lang::Object > const &a1, jint a2)
{
	return call_method<
		java::sql::PreparedStatement::J2CPP_CLASS_NAME,
		java::sql::PreparedStatement::J2CPP_METHOD_NAME(26),
		java::sql::PreparedStatement::J2CPP_METHOD_SIGNATURE(26), 
		void
	>(get_jobject(), a0, a1, a2);
}

void java::sql::PreparedStatement::setObject(jint a0, local_ref< java::lang::Object > const &a1, jint a2, jint a3)
{
	return call_method<
		java::sql::PreparedStatement::J2CPP_CLASS_NAME,
		java::sql::PreparedStatement::J2CPP_METHOD_NAME(27),
		java::sql::PreparedStatement::J2CPP_METHOD_SIGNATURE(27), 
		void
	>(get_jobject(), a0, a1, a2, a3);
}

void java::sql::PreparedStatement::setRef(jint a0, local_ref< java::sql::Ref > const &a1)
{
	return call_method<
		java::sql::PreparedStatement::J2CPP_CLASS_NAME,
		java::sql::PreparedStatement::J2CPP_METHOD_NAME(28),
		java::sql::PreparedStatement::J2CPP_METHOD_SIGNATURE(28), 
		void
	>(get_jobject(), a0, a1);
}

void java::sql::PreparedStatement::setShort(jint a0, jshort a1)
{
	return call_method<
		java::sql::PreparedStatement::J2CPP_CLASS_NAME,
		java::sql::PreparedStatement::J2CPP_METHOD_NAME(29),
		java::sql::PreparedStatement::J2CPP_METHOD_SIGNATURE(29), 
		void
	>(get_jobject(), a0, a1);
}

void java::sql::PreparedStatement::setString(jint a0, local_ref< java::lang::String > const &a1)
{
	return call_method<
		java::sql::PreparedStatement::J2CPP_CLASS_NAME,
		java::sql::PreparedStatement::J2CPP_METHOD_NAME(30),
		java::sql::PreparedStatement::J2CPP_METHOD_SIGNATURE(30), 
		void
	>(get_jobject(), a0, a1);
}

void java::sql::PreparedStatement::setTime(jint a0, local_ref< java::sql::Time > const &a1)
{
	return call_method<
		java::sql::PreparedStatement::J2CPP_CLASS_NAME,
		java::sql::PreparedStatement::J2CPP_METHOD_NAME(31),
		java::sql::PreparedStatement::J2CPP_METHOD_SIGNATURE(31), 
		void
	>(get_jobject(), a0, a1);
}

void java::sql::PreparedStatement::setTime(jint a0, local_ref< java::sql::Time > const &a1, local_ref< java::util::Calendar > const &a2)
{
	return call_method<
		java::sql::PreparedStatement::J2CPP_CLASS_NAME,
		java::sql::PreparedStatement::J2CPP_METHOD_NAME(32),
		java::sql::PreparedStatement::J2CPP_METHOD_SIGNATURE(32), 
		void
	>(get_jobject(), a0, a1, a2);
}

void java::sql::PreparedStatement::setTimestamp(jint a0, local_ref< java::sql::Timestamp > const &a1)
{
	return call_method<
		java::sql::PreparedStatement::J2CPP_CLASS_NAME,
		java::sql::PreparedStatement::J2CPP_METHOD_NAME(33),
		java::sql::PreparedStatement::J2CPP_METHOD_SIGNATURE(33), 
		void
	>(get_jobject(), a0, a1);
}

void java::sql::PreparedStatement::setTimestamp(jint a0, local_ref< java::sql::Timestamp > const &a1, local_ref< java::util::Calendar > const &a2)
{
	return call_method<
		java::sql::PreparedStatement::J2CPP_CLASS_NAME,
		java::sql::PreparedStatement::J2CPP_METHOD_NAME(34),
		java::sql::PreparedStatement::J2CPP_METHOD_SIGNATURE(34), 
		void
	>(get_jobject(), a0, a1, a2);
}

void java::sql::PreparedStatement::setUnicodeStream(jint a0, local_ref< java::io::InputStream > const &a1, jint a2)
{
	return call_method<
		java::sql::PreparedStatement::J2CPP_CLASS_NAME,
		java::sql::PreparedStatement::J2CPP_METHOD_NAME(35),
		java::sql::PreparedStatement::J2CPP_METHOD_SIGNATURE(35), 
		void
	>(get_jobject(), a0, a1, a2);
}

void java::sql::PreparedStatement::setURL(jint a0, local_ref< java::net::URL > const &a1)
{
	return call_method<
		java::sql::PreparedStatement::J2CPP_CLASS_NAME,
		java::sql::PreparedStatement::J2CPP_METHOD_NAME(36),
		java::sql::PreparedStatement::J2CPP_METHOD_SIGNATURE(36), 
		void
	>(get_jobject(), a0, a1);
}

void java::sql::PreparedStatement::setRowId(jint a0, local_ref< java::sql::RowId > const &a1)
{
	return call_method<
		java::sql::PreparedStatement::J2CPP_CLASS_NAME,
		java::sql::PreparedStatement::J2CPP_METHOD_NAME(37),
		java::sql::PreparedStatement::J2CPP_METHOD_SIGNATURE(37), 
		void
	>(get_jobject(), a0, a1);
}

void java::sql::PreparedStatement::setNString(jint a0, local_ref< java::lang::String > const &a1)
{
	return call_method<
		java::sql::PreparedStatement::J2CPP_CLASS_NAME,
		java::sql::PreparedStatement::J2CPP_METHOD_NAME(38),
		java::sql::PreparedStatement::J2CPP_METHOD_SIGNATURE(38), 
		void
	>(get_jobject(), a0, a1);
}

void java::sql::PreparedStatement::setNCharacterStream(jint a0, local_ref< java::io::Reader > const &a1, jlong a2)
{
	return call_method<
		java::sql::PreparedStatement::J2CPP_CLASS_NAME,
		java::sql::PreparedStatement::J2CPP_METHOD_NAME(39),
		java::sql::PreparedStatement::J2CPP_METHOD_SIGNATURE(39), 
		void
	>(get_jobject(), a0, a1, a2);
}

void java::sql::PreparedStatement::setNClob(jint a0, local_ref< java::sql::NClob > const &a1)
{
	return call_method<
		java::sql::PreparedStatement::J2CPP_CLASS_NAME,
		java::sql::PreparedStatement::J2CPP_METHOD_NAME(40),
		java::sql::PreparedStatement::J2CPP_METHOD_SIGNATURE(40), 
		void
	>(get_jobject(), a0, a1);
}

void java::sql::PreparedStatement::setClob(jint a0, local_ref< java::io::Reader > const &a1, jlong a2)
{
	return call_method<
		java::sql::PreparedStatement::J2CPP_CLASS_NAME,
		java::sql::PreparedStatement::J2CPP_METHOD_NAME(41),
		java::sql::PreparedStatement::J2CPP_METHOD_SIGNATURE(41), 
		void
	>(get_jobject(), a0, a1, a2);
}

void java::sql::PreparedStatement::setBlob(jint a0, local_ref< java::io::InputStream > const &a1, jlong a2)
{
	return call_method<
		java::sql::PreparedStatement::J2CPP_CLASS_NAME,
		java::sql::PreparedStatement::J2CPP_METHOD_NAME(42),
		java::sql::PreparedStatement::J2CPP_METHOD_SIGNATURE(42), 
		void
	>(get_jobject(), a0, a1, a2);
}

void java::sql::PreparedStatement::setNClob(jint a0, local_ref< java::io::Reader > const &a1, jlong a2)
{
	return call_method<
		java::sql::PreparedStatement::J2CPP_CLASS_NAME,
		java::sql::PreparedStatement::J2CPP_METHOD_NAME(43),
		java::sql::PreparedStatement::J2CPP_METHOD_SIGNATURE(43), 
		void
	>(get_jobject(), a0, a1, a2);
}

void java::sql::PreparedStatement::setSQLXML(jint a0, local_ref< java::sql::SQLXML > const &a1)
{
	return call_method<
		java::sql::PreparedStatement::J2CPP_CLASS_NAME,
		java::sql::PreparedStatement::J2CPP_METHOD_NAME(44),
		java::sql::PreparedStatement::J2CPP_METHOD_SIGNATURE(44), 
		void
	>(get_jobject(), a0, a1);
}

void java::sql::PreparedStatement::setAsciiStream(jint a0, local_ref< java::io::InputStream > const &a1, jlong a2)
{
	return call_method<
		java::sql::PreparedStatement::J2CPP_CLASS_NAME,
		java::sql::PreparedStatement::J2CPP_METHOD_NAME(45),
		java::sql::PreparedStatement::J2CPP_METHOD_SIGNATURE(45), 
		void
	>(get_jobject(), a0, a1, a2);
}

void java::sql::PreparedStatement::setBinaryStream(jint a0, local_ref< java::io::InputStream > const &a1, jlong a2)
{
	return call_method<
		java::sql::PreparedStatement::J2CPP_CLASS_NAME,
		java::sql::PreparedStatement::J2CPP_METHOD_NAME(46),
		java::sql::PreparedStatement::J2CPP_METHOD_SIGNATURE(46), 
		void
	>(get_jobject(), a0, a1, a2);
}

void java::sql::PreparedStatement::setCharacterStream(jint a0, local_ref< java::io::Reader > const &a1, jlong a2)
{
	return call_method<
		java::sql::PreparedStatement::J2CPP_CLASS_NAME,
		java::sql::PreparedStatement::J2CPP_METHOD_NAME(47),
		java::sql::PreparedStatement::J2CPP_METHOD_SIGNATURE(47), 
		void
	>(get_jobject(), a0, a1, a2);
}

void java::sql::PreparedStatement::setAsciiStream(jint a0, local_ref< java::io::InputStream > const &a1)
{
	return call_method<
		java::sql::PreparedStatement::J2CPP_CLASS_NAME,
		java::sql::PreparedStatement::J2CPP_METHOD_NAME(48),
		java::sql::PreparedStatement::J2CPP_METHOD_SIGNATURE(48), 
		void
	>(get_jobject(), a0, a1);
}

void java::sql::PreparedStatement::setBinaryStream(jint a0, local_ref< java::io::InputStream > const &a1)
{
	return call_method<
		java::sql::PreparedStatement::J2CPP_CLASS_NAME,
		java::sql::PreparedStatement::J2CPP_METHOD_NAME(49),
		java::sql::PreparedStatement::J2CPP_METHOD_SIGNATURE(49), 
		void
	>(get_jobject(), a0, a1);
}

void java::sql::PreparedStatement::setCharacterStream(jint a0, local_ref< java::io::Reader > const &a1)
{
	return call_method<
		java::sql::PreparedStatement::J2CPP_CLASS_NAME,
		java::sql::PreparedStatement::J2CPP_METHOD_NAME(50),
		java::sql::PreparedStatement::J2CPP_METHOD_SIGNATURE(50), 
		void
	>(get_jobject(), a0, a1);
}

void java::sql::PreparedStatement::setNCharacterStream(jint a0, local_ref< java::io::Reader > const &a1)
{
	return call_method<
		java::sql::PreparedStatement::J2CPP_CLASS_NAME,
		java::sql::PreparedStatement::J2CPP_METHOD_NAME(51),
		java::sql::PreparedStatement::J2CPP_METHOD_SIGNATURE(51), 
		void
	>(get_jobject(), a0, a1);
}

void java::sql::PreparedStatement::setClob(jint a0, local_ref< java::io::Reader > const &a1)
{
	return call_method<
		java::sql::PreparedStatement::J2CPP_CLASS_NAME,
		java::sql::PreparedStatement::J2CPP_METHOD_NAME(52),
		java::sql::PreparedStatement::J2CPP_METHOD_SIGNATURE(52), 
		void
	>(get_jobject(), a0, a1);
}

void java::sql::PreparedStatement::setBlob(jint a0, local_ref< java::io::InputStream > const &a1)
{
	return call_method<
		java::sql::PreparedStatement::J2CPP_CLASS_NAME,
		java::sql::PreparedStatement::J2CPP_METHOD_NAME(53),
		java::sql::PreparedStatement::J2CPP_METHOD_SIGNATURE(53), 
		void
	>(get_jobject(), a0, a1);
}

void java::sql::PreparedStatement::setNClob(jint a0, local_ref< java::io::Reader > const &a1)
{
	return call_method<
		java::sql::PreparedStatement::J2CPP_CLASS_NAME,
		java::sql::PreparedStatement::J2CPP_METHOD_NAME(54),
		java::sql::PreparedStatement::J2CPP_METHOD_SIGNATURE(54), 
		void
	>(get_jobject(), a0, a1);
}


J2CPP_DEFINE_CLASS(java::sql::PreparedStatement,"java/sql/PreparedStatement")
J2CPP_DEFINE_METHOD(java::sql::PreparedStatement,0,"addBatch","()V")
J2CPP_DEFINE_METHOD(java::sql::PreparedStatement,1,"clearParameters","()V")
J2CPP_DEFINE_METHOD(java::sql::PreparedStatement,2,"execute","()Z")
J2CPP_DEFINE_METHOD(java::sql::PreparedStatement,3,"executeQuery","()Ljava/sql/ResultSet;")
J2CPP_DEFINE_METHOD(java::sql::PreparedStatement,4,"executeUpdate","()I")
J2CPP_DEFINE_METHOD(java::sql::PreparedStatement,5,"getMetaData","()Ljava/sql/ResultSetMetaData;")
J2CPP_DEFINE_METHOD(java::sql::PreparedStatement,6,"getParameterMetaData","()Ljava/sql/ParameterMetaData;")
J2CPP_DEFINE_METHOD(java::sql::PreparedStatement,7,"setArray","(ILjava/sql/Array;)V")
J2CPP_DEFINE_METHOD(java::sql::PreparedStatement,8,"setAsciiStream","(ILjava/io/InputStream;I)V")
J2CPP_DEFINE_METHOD(java::sql::PreparedStatement,9,"setBigDecimal","(ILjava/math/BigDecimal;)V")
J2CPP_DEFINE_METHOD(java::sql::PreparedStatement,10,"setBinaryStream","(ILjava/io/InputStream;I)V")
J2CPP_DEFINE_METHOD(java::sql::PreparedStatement,11,"setBlob","(ILjava/sql/Blob;)V")
J2CPP_DEFINE_METHOD(java::sql::PreparedStatement,12,"setBoolean","(IZ)V")
J2CPP_DEFINE_METHOD(java::sql::PreparedStatement,13,"setByte","(IB)V")
J2CPP_DEFINE_METHOD(java::sql::PreparedStatement,14,"setBytes","(I[B)V")
J2CPP_DEFINE_METHOD(java::sql::PreparedStatement,15,"setCharacterStream","(ILjava/io/Reader;I)V")
J2CPP_DEFINE_METHOD(java::sql::PreparedStatement,16,"setClob","(ILjava/sql/Clob;)V")
J2CPP_DEFINE_METHOD(java::sql::PreparedStatement,17,"setDate","(ILjava/sql/Date;)V")
J2CPP_DEFINE_METHOD(java::sql::PreparedStatement,18,"setDate","(ILjava/sql/Date;Ljava/util/Calendar;)V")
J2CPP_DEFINE_METHOD(java::sql::PreparedStatement,19,"setDouble","(ID)V")
J2CPP_DEFINE_METHOD(java::sql::PreparedStatement,20,"setFloat","(IF)V")
J2CPP_DEFINE_METHOD(java::sql::PreparedStatement,21,"setInt","(II)V")
J2CPP_DEFINE_METHOD(java::sql::PreparedStatement,22,"setLong","(IJ)V")
J2CPP_DEFINE_METHOD(java::sql::PreparedStatement,23,"setNull","(II)V")
J2CPP_DEFINE_METHOD(java::sql::PreparedStatement,24,"setNull","(IILjava/lang/String;)V")
J2CPP_DEFINE_METHOD(java::sql::PreparedStatement,25,"setObject","(ILjava/lang/Object;)V")
J2CPP_DEFINE_METHOD(java::sql::PreparedStatement,26,"setObject","(ILjava/lang/Object;I)V")
J2CPP_DEFINE_METHOD(java::sql::PreparedStatement,27,"setObject","(ILjava/lang/Object;II)V")
J2CPP_DEFINE_METHOD(java::sql::PreparedStatement,28,"setRef","(ILjava/sql/Ref;)V")
J2CPP_DEFINE_METHOD(java::sql::PreparedStatement,29,"setShort","(IS)V")
J2CPP_DEFINE_METHOD(java::sql::PreparedStatement,30,"setString","(ILjava/lang/String;)V")
J2CPP_DEFINE_METHOD(java::sql::PreparedStatement,31,"setTime","(ILjava/sql/Time;)V")
J2CPP_DEFINE_METHOD(java::sql::PreparedStatement,32,"setTime","(ILjava/sql/Time;Ljava/util/Calendar;)V")
J2CPP_DEFINE_METHOD(java::sql::PreparedStatement,33,"setTimestamp","(ILjava/sql/Timestamp;)V")
J2CPP_DEFINE_METHOD(java::sql::PreparedStatement,34,"setTimestamp","(ILjava/sql/Timestamp;Ljava/util/Calendar;)V")
J2CPP_DEFINE_METHOD(java::sql::PreparedStatement,35,"setUnicodeStream","(ILjava/io/InputStream;I)V")
J2CPP_DEFINE_METHOD(java::sql::PreparedStatement,36,"setURL","(ILjava/net/URL;)V")
J2CPP_DEFINE_METHOD(java::sql::PreparedStatement,37,"setRowId","(ILjava/sql/RowId;)V")
J2CPP_DEFINE_METHOD(java::sql::PreparedStatement,38,"setNString","(ILjava/lang/String;)V")
J2CPP_DEFINE_METHOD(java::sql::PreparedStatement,39,"setNCharacterStream","(ILjava/io/Reader;J)V")
J2CPP_DEFINE_METHOD(java::sql::PreparedStatement,40,"setNClob","(ILjava/sql/NClob;)V")
J2CPP_DEFINE_METHOD(java::sql::PreparedStatement,41,"setClob","(ILjava/io/Reader;J)V")
J2CPP_DEFINE_METHOD(java::sql::PreparedStatement,42,"setBlob","(ILjava/io/InputStream;J)V")
J2CPP_DEFINE_METHOD(java::sql::PreparedStatement,43,"setNClob","(ILjava/io/Reader;J)V")
J2CPP_DEFINE_METHOD(java::sql::PreparedStatement,44,"setSQLXML","(ILjava/sql/SQLXML;)V")
J2CPP_DEFINE_METHOD(java::sql::PreparedStatement,45,"setAsciiStream","(ILjava/io/InputStream;J)V")
J2CPP_DEFINE_METHOD(java::sql::PreparedStatement,46,"setBinaryStream","(ILjava/io/InputStream;J)V")
J2CPP_DEFINE_METHOD(java::sql::PreparedStatement,47,"setCharacterStream","(ILjava/io/Reader;J)V")
J2CPP_DEFINE_METHOD(java::sql::PreparedStatement,48,"setAsciiStream","(ILjava/io/InputStream;)V")
J2CPP_DEFINE_METHOD(java::sql::PreparedStatement,49,"setBinaryStream","(ILjava/io/InputStream;)V")
J2CPP_DEFINE_METHOD(java::sql::PreparedStatement,50,"setCharacterStream","(ILjava/io/Reader;)V")
J2CPP_DEFINE_METHOD(java::sql::PreparedStatement,51,"setNCharacterStream","(ILjava/io/Reader;)V")
J2CPP_DEFINE_METHOD(java::sql::PreparedStatement,52,"setClob","(ILjava/io/Reader;)V")
J2CPP_DEFINE_METHOD(java::sql::PreparedStatement,53,"setBlob","(ILjava/io/InputStream;)V")
J2CPP_DEFINE_METHOD(java::sql::PreparedStatement,54,"setNClob","(ILjava/io/Reader;)V")

} //namespace j2cpp

#endif //J2CPP_JAVA_SQL_PREPAREDSTATEMENT_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
